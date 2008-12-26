require 'rubygems'
gem 'rspec', '<=1.1.11'
require 'spec'
require 'sinatra'
require 'sinatra/test/rspec'
require "#{File.dirname __FILE__}/../blog.rb"

require 'set'

DataMapper.setup(:default, 'sqlite3::memory:')
DataMapper.auto_migrate!
describe "TagCollection", "in creation" do
  before do
    @post = Post.new :name    => "Thing",
		     :content => "Thang",
		     :categories => "abc, def"
    @tags = ["a"]
    rand(rand(rand(rand(100000)))).times { @tags << @tags[-1].succ } # Because I want it
  end
  it "is not required" do
    @post.save.should be_true
  end
  it "accepts to be alone, as a string, a set or an array" do
    ["def", ["ghi"], Set.new('jkl')].each do |tag| 
      @post.tags = "def"
      @post.save.should be_true
    end
  end
  it "accepts dashed strings" do
   @post.tags = @tags.join(',')
   @post.save.should be_true
  end
  it "accepts dashed strings with spaces" do
    @post.tags = @tags.join(', ')
    @post.save.should be_true
  end
  it "accepts sets" do
    @post.tags = @tags.to_set
    @post.save.should be_true
  end
  after(:each) {Post.auto_migrate!}
end
describe "TagCollection", "after creation" do
  before do
    @post = Post.new :name => 'Foo',
		     :content => 'Bar',
		     :categories => 'Baz, dtc',
		     :tags => 'sahara,is,moroccan'
    @post.save
    @post = Post.first(:id => @post.id)
  end
  it("is an array") { @post.tags.class.should == Array }
  it "accepts alone string, set and array" do
    ["zyx", ["wvu"], Set.new('str')].each do |tag|
      @post.tags << tag
      @post.save.should be_true
    end
  end
  it "accepts sets" do
    @post.tags << ['boun', 'te', 'le', 'khe'].to_set
    @post.save.should be_true
  end
  # The only limitation at the moment: it is parsing strings with dashs only when saved
  # (for speed)
  it "accepts dashed strings with spaces" do
    @post.tags << "sahara, is, and, will always, be, Moroccan"
    @post.save
    @post.tags.each {|t| t.should_not =~ /, /}
  end
  it "accepts dashed strings" do
    @post.tags << "ißtänbûl,≠,Câsæblùnca" # With i18n btw
    @post.save.should be_true
  end
  it "accepts its deletion" do
    @post.tags = nil
    @post.save.should be_true
  end
  after(:each) {Post.auto_migrate!}
end

describe "Slugs" do
  describe "when generated" do
    
  end
end
