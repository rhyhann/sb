require 'blog.rb'
disable :run
Parsers = OpenStruct.new
Dir.glob('plugins/**/*.parser.rb').each {|r| require(r)} 
# Model
class Post
  public
  # This function takes a record, sends the given
  # method to the class with the name and the content
  # of the two arguments (Ostruct), updates the tag and the
  # category list (with the same Struct) and saves it
  def parse(variables)
    variables.content = if variables.filter
      variables.filter.each {|f| eval(Parsers.send(f))}
    else
      eval Parsers.send(Blog.parsing_code)
    end
    maybe = self.update_attributes :name    => variables.name,
                                   :content => variables.content
    record = maybe == true ? self : maybe
    record.tags      = variables.tags
    record.categories = variables.categories
    record.save
    return record
  end
end

# This module parses the Yaml files
# and returns an OpenStruct hash of them.
module PostUpdater
  class << self
    def run!
      # TODO: clean (auto_reload)
      Post.auto_migrate!
      Tag.auto_migrate!
      Dir.glob("#{Blog.posts_dir}/**/*.yaml").each do |post|
        puts "Parsing #{post}…"
        post = parse_file(post)
        puts "New post #{Post.new.parse(post).name}"
      end
    end
    # This function creates a new struct by parsing the file.
    # It will first load the Yaml variables and then
    # <tt>OParser.treat</tt> the text.
    def parse_file(file)
      require 'yaml'
      o = OpenStruct.new(YAML.load_file(file))
      o.content = treat(file)
      return o
    end
    # This function removes the annoying text from the
    # file to show the content only
    # api:: *private*
    def treat(file)
      regex = /^--- # P\w*(.*)--- # C[a-zA-Z]*\n/imo
      return File.read(file).chomp.sub(regex, '')
    end
  end
end

PostUpdater.run!
