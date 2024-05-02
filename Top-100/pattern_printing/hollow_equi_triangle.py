rows = int(input("Enter the number of rows"))
for i in range(rows):
    # Calculate the number of spaces and stars
    spaces = ' ' * (rows - i - 1)
    if i == 0 or i == rows - 1:
        stars = '*' * (2*i + 1)
    else:
        stars = '*' + ' ' * (2*i - 1) + '*'
    
    # Print the row
    print(spaces + stars)