module DataMapper
  module Types
    class Tag < DataMapper::Type
      primitive String

      def self.load(value, property)
        value
      end

      def self.dump(value, property)
        if value.nil?
          nil
        elsif value.is_a?(String)
          value.split(',').map {|row| row.sub(/$ /, '') }
        elsif value.kind_of?(Array)
          value
        else
          raise ArgumentError.new("+value+ must be nil, a String or an Array")
        end
      end

      def self.typecast(value, property)
        # No typecasting; leave values exactly as they're provided.
        value
      end
    end # class Tag
  end # module Types
end # module DataMapper
