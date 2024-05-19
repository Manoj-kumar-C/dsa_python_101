array_1 = [5,2,1,4,3]

size_arr = len(array_1)

for i in range(0, size_arr):
    
    for j in range(0, size_arr-i-1):
        
        if(array_1[j] > array_1[j+1]):
            
            temp = array_1[j]
            array_1[j] = array_1[j+1]
            array_1[j+1] = temp
            
for i in range(0, size_arr):
    print(array_1[i],end=" ")
