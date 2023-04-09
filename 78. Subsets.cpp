class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i = 0; i <= (1 << n)-1; i++)
    {
        vector<int> ds;
        for(int j = 0; j < n; j++)
        {
//check if bit set or not             
            if(i & (1 << j))
                ds.push_back(nums[j]);
        }
        ans.push_back(ds);
    }    
    return ans;
    }
};
