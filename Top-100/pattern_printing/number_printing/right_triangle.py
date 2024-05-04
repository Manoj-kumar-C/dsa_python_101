rows = int(input("Enter the number of rows"))

num=1

for i in range(0,rows):
   for j in range(0, i+1):
      print(num,end="")
      num=num+1
   print()

"""_summary_
   1
   23
   456
   78910
"""