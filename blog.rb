# Generations
%w(
   rubygems dm-core
   sinatra  dm-aggregates
   yaml     dm-is-paginated
   ostruct  dm-types
            dm-tags
            dm-validations
  ).each {|n| require(n)}
Dir.glob('lib/**/*.rb').each {|lib| require(lib)}
Dir.glob('plugins/**/*.plugin.rb').each {|plugin| require(plugin)}
configure do
  DataMapper.setup(:default, "sqlite3:///#{Dir.pwd}/db.sqlite3")
  Blog = OpenStruct.new YAML.load_file 'config.yml'
  DataMapper.auto_migrate!
  set :views  => "#{Dir.pwd}/#{Blog.theme}",
      :public => "#{Dir.pwd}/#{Blog.theme}/public"
  # Plugins
  module Plugins
    Views = OpenStruct.new
  end
end

# Model

class Post
  include DataMapper::Resource
  property :id     ,Serial
  property :name   ,String,:nullable => false,:unique => true,:key => true
  property :content,Text  ,:nullable => false
  property :slug      ,Slug
  property :tags      ,TagCollection
  property :categories,TagCollection
  is_paginated
  before :save do
    attribute_set(:slug, @name)
  end
  def self.elements(type, el = Set.new)
    all.each {|r| el.merge(r.send(type))}; el
  end
end

# Controller
def load_posts(page = 1, type = nil, tag = nil)
  @posts = type.nil? ? Post.all : Post.all(type.to_sym.like => "%#{tag}%")
  @posts_count, @posts = @posts.paginated :page     => (page.empty? ? 1 : page.to_i),
					  :per_page => Blog.per_page
end


get '/*' do
  load_posts(params[:splat][0])
  send(Blog.engine, :posts)
end
get '/*/*/:page' do
  load_posts(params[:page], *params[:splat])
  send(Blog.engine, :posts)
end

get "/#{Blog.post_prefix}/:post" do
  @post = Post.first(:slug => params[:post])
  send(Blog.engine, :posts)
end

# Helpers
helpers do
  # Alias for link_to(foo, "/#{Blog.post_prefix}/bar"), intended 
  # to automatically make the post link
  def link_slug(*args)
    args[1] = "#{Blog.post_prefix.to_s}/#{args[1]}"
    link_to(*args)
  end
  # Generates a link from the name and the given url
  def link_to(name, url, options = {})
    "<a href='#{url}' #{attrs(options)}>#{name}</a>"
  end
  # Changes the given hash to xml attributes
  # and their values like #=> key=''
  def attrs(hash)
    hash.map {|k,v| v = "#{k}='#{v.to_s}'"}.join(' ')
  end

end

