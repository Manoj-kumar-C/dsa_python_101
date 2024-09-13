# stack = []

# def enqueue():
#     inp = int(input("Enter the element"))
#     print("Added Elem", inp)
#     stack.append(inp)
# def dequeue():
#     print("Popped Element is ", stack[0])
#     stack.pop(0)
    
# def display():
#     print(stack)

# while True:
#     print(" 1. Enqueue 2.Dequeue 3.Display 4.Exit")
#     choice = int(input("Enter your choice"))
    
#     if choice == 1:
#         enqueue()
#     elif choice == 2:
#         dequeue()
#     elif choice == 3:
#         display()
#     elif choice == 4:
#         break
#     else:
#         print("Enter the Crt Choice")



"""
Queue 

Operations ---> Enqueue, Dequeue, isEmpty, Display


"""



queue = []


def enqueue():
    inp= int(input("Enter the number: "))
    queue.append(inp)


def dequeue():
    if len(queue)==0:
        print("The Queue is Empty")
    else:
        print("The Pop Element is: ", queue[0])
        queue.pop(0)
def display():
    print("The Queue is: ", queue)

def isEmpty():
    if len(queue) == 0:
        print("Yes")
    else:
        print("No")
        
        
while True:
    print(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.IsEmpty\n 5.Exit")
    choice = int(input("Enter Your Choice: "))
    if choice ==1:
        enqueue()
    elif choice == 2:
        dequeue()
    elif choice == 3:
        display()
    elif choice == 4:
        isEmpty()
    elif choice == 5:
        break
    else:
        print("Enter a vaid choice")