def swap_misplaced(nums):
  """
  The idea is to start from the second array element and compare every element with its previous element. 
  We take two variables, x and y, to store the conflict’s location. 
  If the previous element is greater than the current element, update x to the previous element index and y to the current element index. 
  If we find that the previous element is greater than the current element, update y to the current element index. 
  Finally, after we are done processing each adjacent pair of elements, swap the elements at index x and y.


  The time complexity of the above solution is O(n) since it does only a single scan of the input array of size n.
   The solution doesn’t require any extra space.


  """

  pass


if __name__ == '__main__':
 
    a = [3, 5, 6, 9, 8, 7]
    swap_misplaced(a)
    print(a)