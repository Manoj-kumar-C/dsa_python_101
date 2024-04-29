rows = int(input("Enter the number of rows: "))

for i in range(0,rows):
    if(i == 0 or i == rows-1):
        print("*"*4)
    else:
        print("*"," ","*")
        
    
    