# Generations
%w(
   rubygems dm-core
   sinatra  dm-aggregates
   uv       dm-is-paginated
   ostruct  dm-types
   ritex    dm-tags
   maruku   dm-validations
   yaml
  ).each {|n| require(n)}
Dir.glob('lib/**/*.rb').each {|lib| require(lib)}
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
  property :id        ,Serial
  property :slug      ,Slug
  property :name      ,String       ,:nullable => false,:unique => true
  property :content   ,Text         ,:nullable => false
  property :tags      ,TagCollection
  property :categories,TagCollection
  is_paginated
  before :save do
    attribute_set(:slug, @name)
  end
  # This function is an alias for <tt>Post.paginated</tt> (from
  # dm-is-paginated) that sets the per_page argument to the Blog
  # per_page attribute. You just have to give the page number.
  def self.paged(page)
    all.paginated :page     => page.to_i,
              :per_page => Blog.per_page
  end
  def self.elements(type)
    el = Set.new
    all.each {|r| el.merge(r.send(type))}
    el
  end
end

# Controller
get '/' do
  redirect '/1'
end
get '/*/*/:page' do
  type = params[:splat][0].to_sym
  tag  = params[:splat][1]
  @posts_count, @posts = Post.paged params[:page]
  p @posts
  @posts = @posts.all(type.like => "%#{tag}%")
  p @posts
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
    "<a href='#{url}' #{
                        options.to_xml_attributes
                       }>#{name}</a>"
  end
  # Changes the given hash to xml attributes
  # and their values like #=> key=''
  def to_xml_attributes
    self.map {|k,v| v = "#{k}='#{v.to_s}'"}
  end

end

