// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.

class Solution {
public:
    char findTheDifference(string s, string t) {
    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());
    // char abc = ' ';
    // for(int i = 0; i < t.length(); i++)
    // {
    //     if(s[i] != t[i])
    //     {
    //         abc  = t[i];
    //         break;
    //     }
    // }
    char c = 0;
    for(int i = 0; i < s.length(); i++)
    c = c^s[i];
    for(int i = 0; i < t.length(); i++)
    c = c^t[i];

    return c;
    }
};
