"""
array_1 = [4,3,2,5,7]

n = len(array_1)

for i in range(0, n):
    for j in range(i+1, n):
        if(array_1[i] > array_1[j] ):
            temp = array_1[j]
            array_1[j] = array_1[i]
            array_1[i] = temp



print(array_1)

"""



arr = [3,4,2,8,6]


for i in range(0, len(arr)):
    
    for j in range(i+1, len(arr)):
        if(arr[i]> arr[j]):
            temp = arr[i]
            arr[i]= arr[j]
            arr[j] = temp
            
print(arr)