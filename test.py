chars = ['a','a','c','c']
        
char_dict ={}

char_list =[]

for char in chars:
    if char not in char_dict:
        char_dict[char] =0
    char_dict[char] +=1
        
for i in char_dict:
    print(i)
    print(char_dict[i])
    char_list.append(str(i))
    char_list.append(str(char_dict[i]))
    

print(char_list) 