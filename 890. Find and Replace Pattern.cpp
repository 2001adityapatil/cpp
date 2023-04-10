class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> ans = {};
    
    string newstr = createpattern(pattern);
    // cout<<newstr;
    for(int i = 0; i < words.size(); i++)
    {
        if(createpattern(words[i]) == newstr)
        ans.push_back(words[i]);
    }

    return ans;
    }
    string createpattern(string pattern)
    {
        // int j = 1;
        // string str = ""+to_string(j);
        // for(int i = 1; i < pattern.size(); i++)
        // {
        //     if(pattern[i-1] == pattern[i])
        //     str += ""+to_string(j);
        //     else
        //     {
        //         j++;
        //         str += ""+to_string(j);
        //     }
        // }
        // return str;
        string str = "";
        unordered_map<char, int> mp;
        for(int i = 0; i < pattern.size(); i++)
        {
            if(mp.find(pattern[i]) != mp.end())
            {
                str += ""+to_string(mp[pattern[i]]);
            }
            else
            {
                str += ""+to_string(i);
                mp[pattern[i]] = i;
            }
        }
        return str;
    }
};
