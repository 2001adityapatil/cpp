class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    
    int maxi = nums[0];
    int sum = nums[0];
    maxi = max(sum, maxi);
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] <= nums[i-1])
        {
            maxi = max(sum, maxi); 
            sum = nums[i];
        }
        else
        sum += nums[i];
    }
    maxi = max(sum, maxi); 
    return maxi;    
    }
};
