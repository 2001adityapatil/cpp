class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string newstr = "";
    int i = 0, j = 0;
    while(i < word1.size() && j < word2.size())
    {
        newstr += word1[i];
        newstr += word2[j];
        i++;
        j++;
    }    
    while(i < word1.size())
    {
        newstr += word1[i];
        i++;
    }
    while(j < word2.size())
    {
        newstr += word2[j];
        j++;
    }
    return newstr;
    }
};
