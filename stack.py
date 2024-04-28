class Stack:
    def __init__(self):
        self.items=[]
        
    def push(self, item):
        self.items.append(item)
    def pop(self):
        self.items.pop()
    def isEmpty(self):
        self.items.is_empty()
        
stack = Stack()
stack.push(20)

stack.push(30)
print(stack.items)