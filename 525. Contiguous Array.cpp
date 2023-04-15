class Solution {
public:
    int findMaxLength(vector<int>& nums) {

    unordered_map<int, int> mp;
    mp[0] = -1;
    int maxi = 0;
    int sm = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1)
        sm += 1;
        else
        sm -= 1;

        if(mp.find(sm) != mp.end())
        {
            int sub = i - (mp[sm]);
            maxi = max(sub, maxi);
        }
        else
            mp[sm] = i;
    }    
    // cout<<maxi;
    return maxi;
    }
};
