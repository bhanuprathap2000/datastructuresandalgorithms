
def sentence_word_reverse(s):
    
    """
    first we need to create the list from string using the split method.
    then reverse the string and using the string join method using space as delimeter join the list_of_words and return that string.
    The reversed() function returns the reversed iterator of the given sequence.
    """
    list_of_words=s.split(" ")
    list_of_words.reverse()
    
    return " ".join(list_of_words)
    


if __name__=="__main__":
    input_string=input("Enter the string\n")
    print(sentence_word_reverse(input_string))
