class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i++)
    {
        string str = to_string(nums[i]);
        for(int j = 0; j < str.length(); j++)
        res.push_back(str[j]-'0');
    } 
    return res;
    }
};
