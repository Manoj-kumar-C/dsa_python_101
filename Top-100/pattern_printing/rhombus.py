rows = int(input("Enter the number of rows:"))

gap =0

for i in range(0, rows):
    print(" "*gap, end="")
    gap = gap+1
    print("*"*4)