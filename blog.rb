$:.unshift File.dirname(__FILE__) + '/sinatra/lib'
# Generations
%w(
   sinatra  rubygems dm-core
            dm-aggregates
   yaml     dm-is-paginated
   ostruct  dm-types
            dm-tags
            dm-validations
  ).each {|n| require(n)}

configure do
  DataMapper.setup(:default, "sqlite3:///#{Dir.pwd}/db.sqlite3")
  Blog = OpenStruct.new YAML.load_file 'config.yml'
  DataMapper.auto_upgrade!
  set :views  => "#{Dir.pwd}/#{Blog.theme}",
      :public => "#{Dir.pwd}/#{Blog.theme}/public"
  # Plugins
  module Plugins
    Views = OpenStruct.new
    @@added_strings = []
    def self.Views_add(type,string)
      unless @@added_strings.include?(string)
	eval "Views.#{type} = '' if Views.#{type}.nil?"
        eval "Views.#{type} << string"
        @@added_strings << string
      end
    end
    def self.activate(type)
      Dir.glob("plugins/**/*." + type + ".rb").each {|l| load(l)}
    end
  end
end
# Model

class Post
  include DataMapper::Resource
  property :id     ,Serial
  property :name   ,String,:nullable => false,:unique => true,:key => true
  property :content,Text  ,:nullable => false
  property :slug      ,Slug
  is_paginated
  before :save do
    attribute_set(:slug, @name)
  end
end

# Methods
def load_posts(page = 1, type = nil, tag = nil)
  @posts = type.nil? ? Post.all : Post.all(type.to_sym.like => "%#{tag}%")
  @posts_count, @posts = @posts.paginated :page     => (page.empty? ? 1 : page.to_i),
					  :per_page => Blog.per_page
end
not_found do
  redirect "#{request.env['PATH_INFO']}/" if request.env['PATH_INFO'][-1] != 47
  redirect "#{request.env['PATH_INFO']}1" if request.env['PATH_INFO'][-1] == 47
end
## Root
get '/:page' do
  load_posts(params[:page])
  send(Blog.engine, :posts)
end
## Categories/Tags
get '/*/*/:page' do
  load_posts(params[:page], *params[:splat])
  send(Blog.engine, :posts)
end

# Post
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
Plugins.activate 'plugin'
