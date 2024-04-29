rows = int(input("Enter the number of rows "))
count = rows

for i in range(0,rows):
    print(" "*count,end="")
    print("*"*rows)
    count =count-1
    
    