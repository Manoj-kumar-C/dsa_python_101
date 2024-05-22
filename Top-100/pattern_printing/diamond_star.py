"""
             *
            ***
           *****
          *******
           *****
            ***
             *
"""


n = int(input("Enter the numbers"))
count =n

for i in range(0,n):
    print(" "*count,"*"*i)
    count = count-1