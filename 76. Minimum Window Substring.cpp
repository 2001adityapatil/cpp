class Solution {
public:
    string minWindow(string s, string t) {
    if(t == "") return "";
    if(t.length()>s.length())return "";

    // unordered_map<char, int> mp1;
    // unordered_map<char, int> window;
    vector<int> mp1(128,0);
    vector<int> window(128,0);
    for(int i = 0; i < t.length(); i++)
    mp1[t[i]]++;

    int need = 128 - count(mp1.begin(), mp1.end(), 0);
    int have = 0;
    int ans = INT_MAX;
    int len = 0;
    int ansPair = 0;
    int l = 0;

    for(int i = 0; i < s.length(); i++)
    {
        window[s[i]]++;
        if(window[s[i]] == mp1[s[i]])
            have++;
     
            while(have == need)
            {
                len = i - l + 1;
                if(len < ans)
                {
                    ans = len;
                    ansPair = l;
                }

                window[s[l]]--;
                if(mp1[s[l]] and window[s[l]] < mp1[s[l]])
                    have--;

                l++;
            }
    }

    if(ans==INT_MAX)return "";
    return s.substr(ansPair, ans);

    }
};
