class create_stack:
    def __init__(self):
        self.stack = []
    
    def push(self, data):
        self.stack.append(data)
    
    def pop(self):
        if self.stack:
            return self.stack.pop()
        else:
            return None
    
    def peek(self):
        if self.stack:
            return self.stack[-1]
        else:
            return None
    
    def is_empty(self):
        return not bool(self.stack)
    
    def size(self):
        return len(self.stack)
    
stack_mem = create_stack()
stack_mem.push(1)
stack_mem.push(3)
print(stack_mem.stack)