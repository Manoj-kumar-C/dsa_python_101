"""

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
"""

"""
* Stack - LIFO (Last In First Out) or FILO (First in Last Out)

! Remember Book Stack 
? Operations : Push, Pop, Peek or Top, isEmpty
TODOS: Two Ways to implement stack in python --- using List, Modules package

"""



stack= []


def push():
    inp = input("Enter the Element: ")
    stack.append(inp)    
def pop():
    print("The Poped Element: ", stack[0])
    stack.pop()

def display():
    print("The Entire Stack is ", stack)
    

while True:
    print("1. Push \n2.pop \n3.Display \n4. Exit \n")
    
    choice = int(input("Enter the choice: "))
    
    if choice == 1:
        push()
    elif choice == 2: 
        pop()
    elif choice ==3:
        display()
    elif choice ==4:
        break
    else:
        print("Enter a valid choice")
    