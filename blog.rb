# Generations
%w(
   rubygems dm-core
   sinatra  dm-aggregates
   yaml     dm-is-paginated
   ostruct  dm-types
            dm-tags
            dm-validations
  ).each {|n| require(n)}

configure do
  DataMapper.setup(:default, "sqlite3:///#{Dir.pwd}/db.sqlite3")
  ( # Blog constant definition
    # First, we search for the blog hash
    bh = YAML.load_file 'config.yml'
    # We chage its childs to openstruct
    bh.each do |k,v|
      bh[k] = v.is_a?(Hash) ? OpenStruct.new(v) :
                              v
    end
    Blog = OpenStruct.new bh
  ) unless defined? Blog
  DataMapper.auto_upgrade!
  set :views  => "#{Dir.pwd}/#{Blog.theme}",
      :public => "#{Dir.pwd}/#{Blog.theme}/public"
  # Plugins
  module Plugins
    def self.activate(type)
      Dir.glob("plugins/**/*." + type + ".rb").each {|l| load(l)}
    end
    module Views
      @@l = {}
      def self.[](wanted)
        @@l[wanted] = @@l[wanted].nil? ? ::Array.new : @@l[wanted]
      end
      def self.[]=(wanted, to)
        @@l[wanted] = self[wanted]; @@l[wanted] = to.to_a
      end
      def self.method_missing(method, *parameters)
        self[method]
      end
    end
  end
end
# Model

class Post
  include DataMapper::Resource
  property :id     ,Serial
  property :name   ,String,:nullable => false,:unique => true,:key => true
  property :content,Text  ,:nullable => false
  property :slug   ,Slug
  is_paginated
  before :save do
    attribute_set(:slug, @name)
  end
end
# Methods
def load_posts(page = 1, type = nil, tag = nil)
  type = type.to_s.plural
  @posts = type.empty? ? Post.all : Post.all(type.to_sym.like => "%#{Post.slug_for(type)[tag]}%")
  @posts_count, @posts = @posts.paginated :page     => (page.empty? ? 1 : page.to_i),
                                          :per_page => Blog.per_page
end
# This simple function changes the url like that:
# 1. Appends a / in the end (if not)
# 2. Appends a 1 in the end (if not)
# Otherwise, a simple 404 error (TODO)
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
  def link_for(post)
    # TODO: test
    path = Blog.post.path.gsub('%SLUG%', post.slug)
    link_to(post.name, path)
  end
  # Generates a link from the name and the given url
  def link_to(name, url, options = {})
    "<a href='http://eo:4567#{url}' #{attrs(options)}>#{name}</a>"
  end
  # Changes the given hash to xml attributes
  # and their values like #=> key=''
  def attrs(hash)
    hash.map {|k,v| v = "#{k}='#{v.to_s}'"}.join(' ')
  end

end
Plugins.activate 'plugin'
