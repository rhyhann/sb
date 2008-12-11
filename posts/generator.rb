require 'parser.rb'
disable :run
gem 'sevenwire-forgery'
require 'forgery'
categories = tags = []
rand(30).succ.times { 
		     categories += LoremIpsumForgery.words(rand(5).succ).split(' ')
		     tags       += LoremIpsumForgery.words(rand(5).succ.succ).split(' ')
		    }
rand(30).succ.times  do
  Post.new.parse OpenStruct.new :name       => LoremIpsumForgery.word,
			    :tags       => tags.map {|n| tags - [n] if rand(3)!=0 },
			    :categories => categories.map {|n| categories - [n] if rand(4)!=0 },
			    :content    => LoremIpsumForgery.paragraphs(rand(20))  
end

