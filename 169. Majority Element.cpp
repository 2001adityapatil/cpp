// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


// Solution1: brute force where we sort the array and as we know there are n/2 > greater element so we return the middle element
// Solution2: Moore Voting algorithm as we know there is only one element which has majority than others so initially keep counter variable zero at start 
// count will be zero so first element from the array will be intialize to element and counter will increase and after that if first element was equal to second 
// element present in the array count will increase otherwis it will decrease the count by 1 and thats how we get our majority element bcoz it will be intialize as 
// it has more count.


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[(nums.size()-1)/2];
        int element;
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count++;
            }
            else if(element == nums[i])
            count++;
            else
            count--;
        }

        return element;
    }
};
