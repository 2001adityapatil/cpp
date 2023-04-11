class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int less = 0, more = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        int diff = s1[i] - s2[i];
        // cout<<diff<<" ";
        if(diff >= 0) more++;
        if(diff <= 0) less++;
    }     
    return s1.length() == more || s1.length() == less;
    }
};
