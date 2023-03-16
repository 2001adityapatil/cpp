class Solution {
public:
    int lengthOfLongestSubstring(string str) {
    vector<int> mp(256, -1);

    int left = 0, right = 0;
    int n = str.size();
    int len = 0;
    while(right < n)
    {
        if(mp[str[right]] != -1)
        left = max(mp[str[right]]+1, left);

        mp[str[right]] = right;

        len = max(len, right-left+1);
        right++;
    }
    return len;
    }
};
