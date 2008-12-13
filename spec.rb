require 'rubygems'
gem 'rspec', '<=1.1.9'
$:.unshift File.dirname(__FILE__) + '/sinatra/lib'
require 'sinatra'
require 'sinatra/test/rspec'
require 'blog.rb'
DataMapper.setup(:default, 'sqlite3::memory:')
describe "Model", "when created" do
  before do
    properties = {:content => 'Bar', :name => 'bar'}
    @first_post = Post.new(properties)
    @same = Post.new(properties)
  end
  it "is creating good" do
    @first_post.should be_valid
  end
  it "is unique (name)" do
    @first_post.save.should be_true
    @same.should_not be_valid
  end
end
describe "Model", "after creation" do
  it "is slugged"
  it "is referenced"
end
describe "Controller" do
  it "is showing /" do
    get_it '/'
    @response.should be_ok
  end
  it "is loading pages" do
    get_it '/1'
    [@posts_count, @posts].should == Post.paginated(1)
  end
  it "is loading a post" do
    get_it "/#{Blog.post_prefix}/1-bar"
    @response.should be_ok
  end
end
describe "View" do
  it "should show the blog title" do
    get_it '/'
    @response.title.should == Blog.title
  end
end
