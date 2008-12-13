require 'rubygems'
require 'sinatra'

configure do
  Cache = {}      # Create a new cache
end

helpers do
  def menu_helper
    sleep 3       # delay to demonstrate cache speedup...
    "Sinatra Caching Demo<br><a href='/'>Whole Page Cache</a> | <a href='/fragment'>Page Fragment Cache</a> | <a href='clear'>Clear Cache</a>"
  end
end

get '/' do
  Cache['home_page'] ||= erb :home
end

get '/fragment' do
  erb :fragment
end

get '/clear' do
  @menu = Cache['menu_fragment'] ||= menu_helper
  Cache.clear
  "#{@menu}<p>The Cache has been cleared.<p>The next time you load a page, it should take 3 seconds..."
end

use_in_file_templates!

__END__

@@ home
<%= menu_helper %><p>
WHOLE PAGE<br>In this example, we cache the whole page.<br>
The first page view takes 3 seconds to render.<br>
After the first page view, the page is cached and rendering is 'instant'.<p>
(Click the 'refresh' to see the page loading quickly from cache.)

@@ fragment
<%= Cache['menu_fragment'] ||= menu_helper %><p>
PAGE FRAGMENT<br>In this example, only the menu text (above) is cached.<br>
The time value (below) is still generated dynamically.<p><%= Time.now %><p>
(Click the 'refresh' to see the page loading quickly from cache.)
  