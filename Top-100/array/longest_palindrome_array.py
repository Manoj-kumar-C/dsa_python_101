n = int(input())

array =[]
result =0

for i in range(n):
    elem = int(input())
    array.append(elem)
    
array.sort(reverse=True)

for i in range(n):
    if(array[i]  == int(str(array[i])[::-1])):
        result = array[i]
        break
    
print("The Largest palindrome in array is ", result)