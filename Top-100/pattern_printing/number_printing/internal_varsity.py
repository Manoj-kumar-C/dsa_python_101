"""
 333
 313
 323
 333
"""

ro_col = int(input("Enter the number of rows and column"))

count=0
for i in range(0,ro_col):
    if(i == 0 or i == ro_col-1):
        print("3 "*3)
    else:
        print("3",count,"3")
    count = count+1
    
    
