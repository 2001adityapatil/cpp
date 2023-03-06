class Solution {
public:
    bool isIsomorphic(string s, string t) {
    unordered_map<char, char> mp, mp1;
    for(int i = 0; i < s.length(); i++)
    {
        if(mp.find(s[i]) != mp.end() || mp1.find(t[i]) != mp1.end())
        {
            if(mp[s[i]] == t[i] && mp1[t[i]] == s[i])
            continue;
            else
            return false;
        }
        else
        {
            mp1[t[i]] = s[i];
            mp[s[i]] = t[i];
        }
    }   
    return true;
    }
};
