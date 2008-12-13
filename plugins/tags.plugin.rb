puts "aaai========================"
module DataMapper
  module Types
    class TagCollection < DataMapper::Type
      primitive String
      def self.load(value, property)
        value.split(', ').to_a
      end

      def self.dump(value, property)
        result = typecast(value, property)
        result.nil? ? result : result.join(', ')
      end

      def self.typecast(value, property)
        case value
        when nil: nil
        when String; value.split(', ').to_a.uniq
        when Array ; value.uniq
        when Set   ; value.to_a
        else       ; raise ArgumentError.new \
                             "+value+ must be nil String, Set or Array"
        end
      end
    end # class Tag
  end # module Types
end # module DataMapper

class Post
  property :categories, TagCollection
  property :tags      , TagCollection
  def self.elements(type)
    elements = Set.new
    p all
    all.each {|r| p r;p r.tags;elements.merge(r.send(type))}
    return elements.to_a
  end
end
include Sinatra::RenderingHelpers
include Sinatra::Erb

 def link_list(type)
   array = []
   for e in Post.elements(type.to_sym)
      array << "\n  <li><a href='/#{type}/#{e}'>#{e}</a></li>"
   end
   return array.join
 end
Plugins::Views_add :menu, erb(<<-ERB)
<%= link_list :categories %>
ERB
