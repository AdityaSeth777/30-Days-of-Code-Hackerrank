class Solution:
    def __init__(self):
        self.stack = []
        self.queue = []

    def popCharacter(self):
        return self.stack.pop()

    def pushCharacter(self, char):
        self.stack.append(char)

    def dequeueCharacter(self):
        char = self.queue[0]
        self.queue = self.queue[1:]
        return char

    def enqueueCharacter(self, char):
        self.queue.append(char)

#Aditya Seth

s = input()

obj = Solution()

l = len(s)

for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])

isPalindrome = True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
'''
for i in range(l // 2):
    if obj.popCharacter() != obj.dequeueCharacter():
        isPalindrome = False
        break

if isPalindrome:
    print("The word, " + s + ", is a palindrome.")
else:
    print("The word, " + s + ", is not a palindrome.")
