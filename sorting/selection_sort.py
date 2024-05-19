
array_1 = [4,3,2,5,7]

n = len(array_1)

for i in range(0, n):
    for j in range(i+1, n):
        if(array_1[i] > array_1[j] ):
            temp = array_1[j]
            array_1[j] = array_1[i]
            array_1[i] = temp


for j in range(0, n):
    print(array_1[j], end=" ")