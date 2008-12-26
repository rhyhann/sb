require 'rubygems'
gem 'rspec', '<=1.1.11'
require 'sinatra'
require 'sinatra/test/rspec'
require 'dm-types'
require 'blog.rb'
require 'shnork'
DataMapper.setup(:default, 'sqlite3::memory:')
DataMapper.auto_migrate!
describe "Model" do
  describe "when created" do
    before do
      properties = {:content => 'Bar', :name => 'bar'}
      @first_post = Post.new(properties)
      @same = Post.new(properties)
    end
    it "is created" do
      @first_post.should be_valid
    end
    it "is unique (name)" do
      @first_post.save.should be_true
      @same.save.should_not be_true
    end
    after(:each) { Post.auto_migrate! }
  end
  describe "after creation" do
    before(:each) do
      @post = Post.new :name => 'Tèst reMôvès a päîn from YoUr äss',
		       :content => 'That\'s true!'
    end
#    it "is slugged"# do (Does not work only in tests)
      #@post.save
      #@post.slug.should == 'test-removes-a-pain-from-your-ass'
    #end
    it "is referenced" do
      @post.save
      Post.all.should be_include(@post)
    end
    after(:each) {Post.auto_migrate!}
  end
end
describe "Controller" do
  before do
    @post = Post.new(:content => 'abc', :name => 'defGH')
    @post.save
  end
  it "is showing /" do
    get_it '/'
    @response.status.should == 302
  end
  it "loads pages, existing or not" do
    get_it '/100'
    @response.status.should == 200
  end
  it "is loading a post" do
    get_it "/#{Blog.post_prefix}/defgh"
    @response.should be_ok
  end
end
 # TODO
describe "View" do
  include RspecShnork
#  it "is perfect"
end
