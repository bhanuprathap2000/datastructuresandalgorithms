class SwapMisplaced{

    public static void main(String[] args) {
        /*
        The idea is to start from the second array element and compare every element with its previous element. 
        We take two variables, x and y, to store the conflict’s location. 
        If the previous element is greater than the current element, update x to the previous element index and y to the current element index. 
        If we find that the previous element is greater than the current element, update y to the current element index. 
        Finally, after we are done processing each adjacent pair of elements, swap the elements at index x and y.


        The time complexity of the above solution is O(n) since it does only a single scan of the input array of size n.
        The solution doesn’t require any extra space.
        */

        int[] nums = { 3, 5, 6, 9, 8, 7 }; //array is an object in java.that's why we are able to use methods on it.

        int x = -1, y = -1;
        
        int prev = nums[0];

        for (int i = 1; i < nums.length; i++) {

            if (prev > nums[i]) {
                if (x == -1) {
                    x = i - 1;
                } else {
                    y = i;
                }

            }

            prev = nums[i];
        }
        
        //swapping the elements
        
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;

        //printing the elements

        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }

        

    }
}