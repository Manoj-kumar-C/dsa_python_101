class Stack:
    def __init__(self):
        self.items=[]
        
    def push(self, item):
        self.items.append(item)
        #items[i]= item
    def pop(self):
        self.items.pop()
        
    def isEmpty(self):
        self.items.is_empty()
        
stack = Stack()
stack.push(20)
stack.push(50)
stack.pop()
stack.push(30)
print(stack.items)