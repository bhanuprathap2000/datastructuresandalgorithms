

def sub_array(arr):
    """
    A subarray is a slice from a contiguous array (i.e., occupy consecutive positions) and inherently maintains the order of elements. 
    For example, the subarrays of array {1, 2, 3} are {1}, {1, 2}, {1, 2, 3}, {2}, {2, 3}, and {3}.

    Approach:
    we will maintain two for loops first loop will take one element and inside for loop will combine with next elements apart from the element from the outside for loop.

    example the array is {1,2,3,4,5}

    outer for loop  will take 1st element as 1 and will combine with next elements as {2,3,4,5}  in inner for loop
    outer for loop  will take 2nd element as 2 and will combine with next elements as {3,4,5}  in inner for loop and so on.


    """
    for i in range(len(arr)):
        for j in range(i,len(arr)):
            print(arr[i:j+1])

def sub_string(s):
    """
    A substring of a string s is a string s' that occurs in s. A substring is almost similar to a subarray, but it is in the context of strings.
    For example, the substrings of string 'apple' are 'apple', 'appl', 'pple', 'app', 'ppl', 'ple', 'ap', 'pp', 'pl', 'le', 'a', 'p', 'l', 'e', ''

    Approach:The approach here is same as the above subarray.

    """
    for i in range(len(s)):
        for j in range(i,len(s)):
            print(s[i:j+1],end=' ')

def sub_sequence(seq):

    """
    A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements. For example, {nums, B, D} is a subsequence of sequence {nums, B, C, D, E} obtained after removing {C} and {E}.

 
    People are often confused between a subarray/substring and a subsequence. A subarray or substring will always be contiguous, but a subsequence need not be contiguous. That is, subsequences are not required to occupy consecutive positions within the original sequences. But we can say that both contiguous subsequence and subarray are the same.

    In other words, the subsequence is a generalization of a substring, or substring is a refinement of the subsequence. For example, {nums, C, E} is a subsequence of {nums, B, C, D, E}, but not a substring, and {nums, B, C} is both a subarray and a subsequence.

    Please note that a subsequence can be in the context of both arrays and strings. Generating all subsequences of an array/string is equivalent to generating a power set of an array/string. For a given set, S, we can find the power set by generating all binary numbers between 0 and 2n-1, where n is the size of the given set. 

    Approach: 
    So the approach here is to generate all subsequences of the given sequence.
    We can generate all subsequences by generating all binary numbers between 0 and 2^n-1, where n is the size of the given sequence.
    For example, if the given sequence is "bat", then we can generate all subsequences by generating all binary numbers between 0 and 8.
    These are the index numbers.
    b = 0
    a = 1
    t = 2
    
    The binary numbers are as follows:
    0 0 0 so here we have generated the empty sequence.    
    0 0 1 so here we have generated the sequence "b".
    ******
    This example i am taking for this 001 and from this other explnation can be easily derived.

    0 0 1 so our goal is to check each bit from this number and if that bit is 1 then we will include the element corresponding to that index position of the bit.
    so for this we use a for loop with 1<<j this statement will generate the 0 0 1, 0 1 0, 1 0 0 for this example as length is 3. and we will apply (and operator) 
    with i th number and in this way we get to know which of the ith number is 1 and so that we can include or if that bit is zero don't include.
    ****
    
    0 1 0 so here we have generated the sequence "a". 
    0 1 1 so here we have generated the sequence "ab".
    1 0 0 so here we have generated the sequence "t".
    1 0 1 so here we have generated the sequence "at".
    1 1 0 so here we have generated the sequence "tb".
    1 1 1 so here we have generated the sequence "bat".

    so we generate the binary sequence whose length depends on the sequence length and in the binary number if a bit is 1 then we can
    consider that index element and add it to our set

    """

    N=2**len(seq) 
    # generate each subset one by one
    result = []
    for i in range(N):# generate the numbers from 0 to 2^n-1
        s = []
        # check every bit of `i`
        for j in range(len(seq)):
            # if j'th bit of `i` is set, print S[j]
            if (i & (1 << j)) != 0:
                s.append(seq[j])
        result.append(s)

    print(result)



"""
Sub set defination.

A subset is any possible combination of the original set. The term subset is often used for subsequence, but that’s not right. A subsequence always maintains the relative order of the array elements (i.e., increasing index), but there is no such restriction on a subset. For example, {3, 1} is a valid subset of {1, 2, 3, 4, 5}, but it is neither a subsequence nor a subarray.

It is worth noting that all subarrays are subsequences and all subsequences are a subset, but the reverse is not valid. For instance, a subarray {1, 2} of array {1, 2, 3, 4, 5} is also a subsequence and a subset.
 
"""


if __name__ == '__main__':
    # nums=[1,2,3,4,5,6]
    # sub_array(nums)
    # name="helloguys"
    # sub_string(name)

    sub_sequence('hi')