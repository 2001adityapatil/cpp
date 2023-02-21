// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// brute force
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

int i;
    for( i = 0; i < nums.size()-1; i+=2)
    {
        if(nums[i] != nums[i+1])
        return nums[i];
    }
    return nums[i];
    }
};
