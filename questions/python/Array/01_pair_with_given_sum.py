"""
Find a pair with the given sum in an array
Given an unsorted integer array, find a pair with the given sum in it.

For example,

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 

Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found
"""

def find_pair(nums,target):
  """
  In  this approach we are considering every pair in the given array and return if the desired sum is found.
  For this appraoch we can have two for loops 
  In first loop we will get elements till last but one.
  In the second loop we get the elements one after the element from top loop till the last element.
  In this way we are trying to from a pair and checking their sum whether equal or not.
  I have added an extra variable to keep the track of how many pairs found equal to target.
  """

  pair_count=0

  for i in range(len(nums)-1):
    for j in range(i+1,len(nums)):
      if nums[i]+nums[j]==target:
        pair_count+=1
        print("Pair found ({},{})".format(nums[i],nums[j]))
  
  if pair_count==0:
    print("Pair not found")

def find_pair_for_sorted(nums,target):
    """
  The idea is to sort the given array in ascending order and maintain search space
  by maintaining two indices (low and high) that initially points to two endpoints of the array. 
  Then reduce the search space nums[low…high] at each iteration of the loop by
  comparing the sum of elements present at indices low and high with the desired target. 
  Increment low if the sum is less than the expected target; otherwise, 
  decrement high if the sum is more than the desired target. If the pair is found, return it.

  The time complexity of the above solution is O(n.log(n)) and doesn’t require any extra space.
  8,7,2,5,3,1

  1,2,3,5,7,8
  
  """
    nums.sort()

    low,high=0,len(nums)-1
    pair_count=0

    while low<high:

      if nums[low]+nums[high]==target:
        pair_count+=1
        print("Pair found ({},{})".format(nums[low],nums[high]))

      if nums[low]+nums[high]<target:
        low=low+1
      else:
        high=high-1

    if pair_count==0:
      print("No pair found")



nums=[8,7,2,5,3,1]
target=10

find_pair_for_sorted(nums,target)
      
