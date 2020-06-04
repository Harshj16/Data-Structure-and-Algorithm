#Stack DSA
#often known as FILO or LIFO
#Creating an empty array
class Stack:
    
    #initisialization of stack
    def __init__(self):
        self.stack = []

    #To make stack empty
    def isEmpty(self):
        return self.stack == []

    #pop item
    def pop(self):
        if len(self.stack) < 1:
            return None
        return self.stack.pop()

    #push item in stack
    def push(self, item):
        self.stack.append(item)

    #size of stack
    def size(self):
        return len(self.stack)
    
    #peek item in stack
    def peek(self):
        return self.stack[0]

    #display elements in stack
    def disp(self):
        print(*self.stack , sep = "\n")
    

#making object of class stack 
s = Stack()
s.push('Hello')
s.push('World')
s.push('Stack operation')
s.disp()
print("Size of Stack is " + str(s.size()))
print("First element in stack is " + s.peek())
print("poped element is " + s.pop())
print(s.size())
s.disp()




            
