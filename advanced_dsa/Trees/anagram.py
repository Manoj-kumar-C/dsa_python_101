# input: ["eat","tea","tan","ate","nat","bat"]

# Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

# inp1 = ["eat","tea","tan","ate","nat","bat"]
# input2 = inp1[1:]

# print(input2)


# for i in inp1:
#     for j input2
    
    
def group_anagrams(words):
    """Group words that are anagrams of each other."""
    anagrams = {}
    
    for word in words:
        # Sort the characters in the word to create a key
        key = ''.join(sorted(word))
        
        # Add the word to the appropriate list in the dictionary
        if key not in anagrams:
            anagrams[key] = []
         
        anagrams[key].append(word)
        
    # Return groups of anagrams as a list of lists
    return list(anagrams.values())

# Example usage
if __name__ == "__main__":
    words = ["eat", "tea", "tan", "ate", "nat", "bat"]
    grouped_anagrams = group_anagrams(words)
    
    # Print the results
    for group in grouped_anagrams:
        print(group)
