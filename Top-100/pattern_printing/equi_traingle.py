rows = int(input("Enter the number of rows"))

space=rows 
stars=1
for i in range(0, rows):
    print(" "*space, "*"*stars)
    stars = stars+2
    space = space-1