class PairSum {


    public static void findPair(int[] nums, int target) {

        /*
        In  this approach we are considering every pair in the given array and return if the desired sum is found.
        For this appraoch we can have two for loops 
        In first loop we will get elements till last but one.
        In the second loop we get the elements one after the element from top loop till the last element.
        In this way we are trying to from a pair and checking their sum whether equal or not.
        I have added an extra variable to keep the track of how many pairs found equal to target.
        */

        int pair_count = 0;
        
        for (int i = 0; i < nums.length - 1; i++) {

            for (int j = i + 1; j < nums.length; j++) {

                if (nums[i] + nums[j] == target) {
                    System.out.println("Pair found (" + nums[i] + "," + nums[j] + ")");
                    pair_count++;
                }
            }
        }
        
        if (pair_count == 0) {
            System.out.println("No pair found");
        }

        return;
        

    }
    

    public static void main(String[] args) {

        int[] nums = { 8, 7, 2, 5, 3, 1 };
        int target = 10;
        
        findPair(nums, target);


    }
}