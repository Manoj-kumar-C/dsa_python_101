stack = []

def enqueue():
    inp = int(input("Enter the element"))
    print("Added Elem", inp)
    stack.append(inp)
def dequeue():
    print("Popped Element is ", stack[0])
    stack.pop(0)
    
def display():
    print(stack)

while True:
    print(" 1. Enqueue 2.Dequeue 3.Display 4.Exit")
    choice = int(input("Enter your choice"))
    
    if choice == 1:
        enqueue()
    elif choice == 2:
        dequeue()
    elif choice == 3:
        display()
    elif choice == 4:
        break
    else:
        print("Enter the Crt Choice")
