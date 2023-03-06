class Solution {
public:
    bool wordPattern(string pattern, string s) {

        
    unordered_map<string, string> mp1, mp2;
    vector<string> v;
    string str = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            v.push_back(str);
            str = "";
            continue;
        }
        str += s[i];
    } 
    v.push_back(str);

    if(pattern.length() > v.size())
    return false;

    string st;
    for(int i = 0; i < v.size(); i++)
    {
        st = st+pattern[i];
        if(mp1.find(st) != mp1.end() && mp1[st] != v[i]) 
            return false;
        
        if(mp2.find(v[i]) != mp2.end() && mp2[v[i]] != st)
            return false;

        mp1[st] = v[i];
        mp2[v[i]] = st;
        st = "";
    }
    return true;

    }
};
