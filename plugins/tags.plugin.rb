require 'dm-migrations'
require 'migration_runner'

DataMapper::MigrationRunner.migration 1, :add_tags do
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
  def self.elements(type)
    elements = Array.new
    all.each {|r| elements.merge(r.send(type))}
    return elements
  end
end

include Sinatra::RenderingHelpers
include Sinatra::Erb

template :thing do 
<<-HAML
<% for category in Post.elements(:tags) %>
  <li><%= category %></li>
<% end %>
HAML
end
Plugins::Views.menu ||= erb(:thing)
configure do
  Post.add_tags!
end
