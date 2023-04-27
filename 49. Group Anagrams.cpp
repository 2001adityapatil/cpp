class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;


    for(auto s: strs)
    {
        string str = s;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }
    for(auto x: mp)
    ans.push_back(x.second);
    
    return ans;
    }
};
