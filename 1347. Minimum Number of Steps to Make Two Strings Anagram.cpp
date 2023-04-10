class Solution {
public:
    int minSteps(string s, string t) {
    unordered_map<char, int> mp;
    for(int i = 0; i < s.size(); i++)
    mp[s[i]]++;

    int c = 0;
    for(int i = 0; i < t.size(); i++)
    {
        if(mp.find(t[i]) != mp.end())
        {
            if(mp[t[i]] == 0)
            c++;
            else
            mp[t[i]]--;
        }
        else
        {
            c++;
        }
    }   

    // cout<<c;
    return c;
    }
};
