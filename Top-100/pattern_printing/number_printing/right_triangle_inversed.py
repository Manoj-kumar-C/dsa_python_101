rows = int(input("Enter the number of rows"))

num=(rows*(rows+1))/2

for i in range(rows,0,-1):
    for j in range(i):
        print(int(num), end=" ")
        num -= 1
    print()
    
"""
    10987
    654
    32
    1
"""