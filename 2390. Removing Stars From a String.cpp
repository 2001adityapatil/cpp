class Solution {
public:
    string removeStars(string s) {
    string str = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '*')
        str.pop_back();
        else
        str += s[i];
    }   

    return str;
    }
};
