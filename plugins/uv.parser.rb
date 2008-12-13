require 'rubygems'
require 'maruku'
require 'maruku/ext/math'
require 'uv'
MaRuKu::Globals[:html_math_engine] = 'itex2mml'
OpenCode = /^[a-zA-Z]*\-\-+/
CloseCode = /^\+\-\-[a-zA-Z]*/

MaRuKu::In::Markdown::register_block_extension(
  :regexp  => OpenCode,
  :handler => lambda do |doc, thing, context|
    # Catch the language and throw the first line
    language = thing.cur_line.sub(/^(\w*)\-\-\+/, '\1')
    thing.shift_line
    # Read lines until it matches the close code
    lines = []
    lines.push(thing.shift_line) until thing.cur_line =~ CloseCode
    # Throw the last line & parse code
    thing.shift_line
    context.push doc.md_html(code(language, lines.join("\n")))
    true
  end)
  def code(language, string = nil, &block)
    code = Uv.parse string,
                    "xhtml",
                    language,
                    false,
                    Blog.code_theme
    result = ""
    code.sub('>', ">\n").each_line do |l|
      l = "\n<li>#{l}" if l !~ /<.?pre/
      result << "#{l}</li>\n" if l !~ /<.?pre/
    end
    "<ol class='spacecadet'>
  <code>
    <pre>#{result.gsub("\n", '')}</pre>
  </code>
</ol>"
  end
Parsers.maruku = "Maruku.new(variables.content).to_html"
