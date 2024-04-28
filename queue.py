class Queue:
    def __init__(self):
        self.items=[]
    def enqueue(self, item):
        self.items.append(item)
    def dequeue(self):
        self.items.pop(0)


queue = Queue()

queue.enqueue(20)
print(queue.items)
