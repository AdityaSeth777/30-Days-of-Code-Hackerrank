class Solution
    def initialize
        @queue = Queue.new
        @stack = []
    end

    def push_character(char)
        @stack << char
    end
    def pop_character
        @stack.pop
    end
    def enqueue_character(char)
        @queue << char
    end
    def dequeue_character
        @queue.pop
    end
end

solution = Solution.new

input = gets

input.split('').each do |c|

    solution.push_character c
    
    solution.enqueue_character c
end

is_palindrome = true

(input.length / 2).times do
    if solution.pop_character != solution.dequeue_character
        is_palindrome = false
        break
    end
end


if is_palindrome
    puts "The word, #{input}, is a palindrome."
else
    puts "The word, #{input}, is not a palindrome."
end
