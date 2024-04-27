

arr = [1,2,3,4,5,6]

resbool = False;

x=2

arrlen = len(arr)
index =0

for i in range(arrlen):
    if arr[i]==x:
        resbool = True
        index = i
        break
    

if(resbool == True):
    print(index)
else:
    print("Not Found")