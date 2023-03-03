class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() == 1 && needle.length() == 1)
        {
            if(haystack == needle)
            return 0;
        }
        string str = ""; 
        int ind = -1;
        for(int i = 0; i < haystack.length(); i++)
        {
            str += haystack[i];
            if(str == needle)
			ind = i;
            for(int j = i + 1; j < haystack.length(); j++)
            {
                str += haystack[j];
                if(str == needle)
                {
                    ind = i;
                    break;
                }
            }
            str = "";
            if(ind != -1)
            break;
        }
        return ind;
    }
};
