
def palindrome(s):
    """
    Given a string s returns True if string is palindrome else False
    reverse the given string and check for their equality and true if equal else False
    """
    reverse_string=""
    
    for char in s:
        reverse_string=char+reverse_string
    if s==reverse_string:
        return True
    else:
        return False
        

def symmetry(s):
    """
    Given a string s check for symmetry
    if string is of even length then check the first half and second half of string
    if string is of odd length then check the first half and second half of string without touching the middle element.
    
    """
    s_half_length=len(s)//2
    
    if len(s)%2==0:
        first_half_s=s[0:s_half_length]
        second_half_s=s[s_half_length:]
        
        if first_half_s==second_half_s:
            return True
        else:
            return False
    else:
        first_half_s=s[0:s_half_length]
        second_half_s=s[s_half_length+1:]
        
        if first_half_s==second_half_s:
            return True
        else:
            return False
    


if __name__=="__main__":
    input_string=input("Enter the string\n")
    print(palindrome(input_string))
    print(symmetry(input_string))
    
