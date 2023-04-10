class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
    // int space = spaces[0];
    int space = 0;
    string str = "";
    int i;
    for(i = 0; i < s.length() && space < spaces.size(); i++)
    {
        if(i == spaces[space])
        {
            str += " ";
            space++;
            str += s[i];
        }
        else
        str += s[i];
    } 
    while(i < s.length())
    {
        str += s[i];
        i++;
    }

    return str;
    }
};
