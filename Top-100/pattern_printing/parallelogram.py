rows = int(input("Enter the number of rows:"))
nums_star = int(input("Enter number of stars in a row"))

space=0

for i in range(0,rows):
    print(" "*space, end="")
    print("*"*nums_star)
    space= space+1