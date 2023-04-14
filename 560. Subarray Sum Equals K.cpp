class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

    unordered_map<int, int> mp;
    int sm = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sm += nums[i];
        if(sm == k)
        {
            count++;
            // continue;
        }
        int val = sm - k;
        if(mp.find(val) != mp.end())
            count += mp[val];
        
        mp[sm] += 1;
        
    } 

    return count;
    }

   
};
