module DataMapper
  module Types
    class TagCollection < DataMapper::Type
      primitive String
      def self.load(value, property)
        typecast(value, property)#value.split(', ').to_a
      end

      def self.dump(value, property)
        result = typecast(value, property)
        result.nil? ? result : result.join(', ')
      end

      def self.typecast(value, property)
        case value
        when nil: nil
        when String; value.split(', ').uniq
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
    all.each {|r|elements.merge(r.send(type) || [])}
    return elements.to_a
  end
  # It takes an array of all the elements
  # (see Post.elements) and slugify them.
  # It's stored under a constant:
  # $(Tag|Category)Slug
  def self.slug_for(type)
    hash = {}
    Post.elements(type.to_s).each do |e| # Each element of the given type
      hash[DataMapper::Types::Slug.escape(e)] = e # Is a value a its escaped key
    end; hash
  end
end

include Sinatra::RenderingHelpers
include Sinatra::Erb

def link_list(type)
 array = []
 for e in Post.elements(type.to_sym)
    slug = Post.slug_for(type).invert[e]
    array << "<a href='/#{type.to_s.singular}/#{slug}'>#{e}</a>"
 end
 return array
end

# Generation of the category list
Plugins::Views[:menu] += link_list(:categories)
Plugins::Views[:menu].uniq!
# TODO Generation of the tag cloud
# Generation of the post meta tags
module Plugins::Views
  def post_meta(post)
    @@l[:post_meta][post.id] = post.tags.map do |tag|
      "<a href='/tag/#{Post.sluf_for(:tags).invert[tag]}>tag</a>"
    end if post.tags # Very important! Otherwise it will be nil!
  end
end
