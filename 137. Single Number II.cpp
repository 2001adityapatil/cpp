class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int res = 0;
	for (int i = 0; i < nums.size(); i++)
	{
        if(count(nums.begin(), nums.end(), nums[i]) == 1)
        {
            return nums[i];
        }
	}

    return res;    
    }
};
