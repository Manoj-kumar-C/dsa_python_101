
def peak_element(arr1, length):
    n = len(arr1)
    if (n==1):
        return 0
    if (arr1[0]> arr1[1]):
        return 0
    if (arr1[n-1]> arr1[n-1]):
        return n-1
    for i in range(0,n-1):
        if(arr1[i] > arr1[i-1] and arr1[i]> arr1[i+1]):
            return i
        

arr1 = [1,2,4,6,9,8]

length = len(arr1)


#print("index is ",peak_element(arr1, length))
"""
sortedarr = arr1

sortedarr.sort(reverse=True)

print(sortedarr)

"""