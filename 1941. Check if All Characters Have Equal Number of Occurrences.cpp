// Input: s = "abacbc"
// Output: true
// Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int c1 = count(s.begin(), s.end(), s[0]);
        for(int i = 1; i < s.length(); i++)
        {
            int c = count(s.begin(), s.end(), s[i]);
            if(c1 != c)
            return false; 

            c1 = c;
        }
        return true;
    }
};
