class Solution {
public:
    int firstUniqChar(string s) {

    map<char, int> mp;
     for(int i = 0; i < s.length(); i++)
        mp[s[i]]++;

    for(int i = 0; i < s.length(); i++)
    {
        if(mp[s[i]] == 1)
        return i;
    }
    return -1;
    }
};


class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        //map to store frequency of each character in the string
        for(auto i:s)
        {
            mp[i]++;
        }
        //if map[s[i]] has a value 1 then return the index.
        //else return -1
        for(int i = 0;i<s.size();i++)
        {
            if(mp.at(s[i])==1)
            return i;
        }
        return -1;
    }
};
