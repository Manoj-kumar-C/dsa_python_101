stack = []

def push():
    inp = int(input("Enter the element"))
    print("Added Elem", inp)
    stack.append(inp)
def pop():
    print("Popped Element is ", stack[-1])
    stack.pop()
    
def display():
    print(stack)

while True:
    print(" 1. Push 2.Pop 3.Display 4.Exit")
    choice = int(input("Enter your choice"))
    
    if choice == 1:
        push()
    elif choice == 2:
        pop()
    elif choice == 3:
        display()
    elif choice == 4:
        break
    else:
        print("Enter the Crt Choice")
