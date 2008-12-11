require 'dm-migrations'
require 'migration_runner'
configure do
  Post.auto_migrate!  
end
DataMapper::MigrationRunner.migration 1, :auto_migrate do
  up do
    add_column :categories,TagCollection
    add_column :tags      ,TagCollection
  end
  down do
    drop_column :categories
    drom_column :tags
  end
end
class Post
  before :save do
    attribute_set(:slug, @name)
  end
  def self.elements(type)
    elements = Array.new
    all.each {|r| elements.merge(r.send(type))}
    return elements
  end
end

include Sinatra::RenderingHelpers
include Sinatra::Haml

template :thing do 
  <<-HAML
- for category in Post.elements(:tags)
  %li= category
HAML
end
Plugins::Views.menu ||= Sinatra::Haml.haml(:thing)

