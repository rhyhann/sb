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
