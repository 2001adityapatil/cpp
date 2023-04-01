class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    vector<int> ans;
    for(int i = 0; i < nums.size();  i++)
    {
        int s = target-nums[i];
        if(mp.find(s) != mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[s]);
            break;
        }
        else
            mp[nums[i]] = i;
    }
    return ans;
    }
};
