# This simple script runs all the tests when a file is changed
# Requires directory_watcher
require 'rubygems'
require 'directory_watcher'

# No first test, all the Ruby files and checked each 2 seconds
dw = DirectoryWatcher.new '.', :pre_load => true, :glob => '**/*.rb', :interval => 2.0
dw.add_observer do |*args|
  args.each do |event|
    s = `spec spec/`
    s =~ /0 failures/ ? `mumbles-send "Tests passed"  "#{event}"` :
			`mumbles-send "Tests failed!" "#{event}"`  
  end
end

dw.start
gets      # when the user hits "enter" the script will terminate
dw.stop
