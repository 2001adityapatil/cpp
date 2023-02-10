// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Solution: Here we are taking sum as 0 and then currsum as nums[0] iterating over the array we are calculating the sum linearly and if sum is greater than currSum
// then assign currSum the sum and if sum is less than zero we are initializing it with zero bcoz carrying the sum of negative will no of use it will decrease our sum 
// and we want the maximum sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0;
        int currsum = nums[0];

        for(int i = 0; i < nums.size();i++)
        {
            sum = sum + nums[i];
            if(sum > currsum)
            currsum = sum;

            if(sum < 0)
            sum=0;
        }

        return currsum;
    }
};
