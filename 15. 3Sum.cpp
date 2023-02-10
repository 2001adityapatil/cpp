// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.
// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.
 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        // Iterating over the array
        for(int i = 0; i < nums.size()-2; i++) 
        {
            // checking if the i is zero or if i is greater than zero and should
            // not equal to prev value i.e nums[i-1]
            if(i == 0 || (i > 0 && nums[i] != nums[i-1]))
            {
                // keep low on the next value to ith index
                int lo = i+1;
                // keep high on the last value of array
                int ho = nums.size()-1;
                // b+c = -a so here -a i.e sum
                int sum = 0 - nums[i];

                // looping till low is less than high 
                while(lo < ho)
                {
                    // checking if at the low and high index if the sum is equal
                    if(nums[lo]+nums[ho] == sum)
                    {
                        // if equal adding values in result vector
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[lo]);
                        tmp.push_back(nums[ho]);
                        res.push_back(tmp);

                        // looping if element next to it is same bcoz it will
                        // give the same 3sum increment the low 
                        while(lo < ho && nums[lo] == nums[lo+1])
                        lo++;
                        // looping if element next to it is same bcoz it will
                        // give the same 3sum and decrement the high
                        while(lo < ho && nums[ho] == nums[ho-1])
                        ho--;

                        // after getting last same element we r point to next index
                        lo++;
                        // after getting last same element we r point to next index
                        ho--;
                    }
                    // if sum at ho and lo is less than sum increment low
                    else if(nums[lo] + nums[ho] < sum)
                    lo++;
                    // if sum at ho and lo is less than sum decrement high
                    else
                    ho--;
                }
            }
        }
        return res;
    }
};
