
stack = []


def push(element):
    stack.append(element)
def pop():
    stack.pop()
def ispeek():
    print(stack[-1])
def display():
    print(stack)
    
def isEmpty():
    if(len(stack)==0):
        print("Yes")
    else:
        print("No")
def isFull():
    if(len(stack)==5):
        print("Yes")
    else:
        print("No")
    
"""
n = int(input("Enter the number of elements"))

count = n

while()

"""
isEmpty()
isFull()
push(1)
push(1)
display()