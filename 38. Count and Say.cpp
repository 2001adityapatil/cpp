class Solution {
public:
    string countAndSay(int n) {
    string str = "1";
    string v = "0123456789"; 

    if(n == 1)
    return str;

    for(int i = 2; i <= n; i++)
    {
        string newstr = "";
        char ch = str[0];
        int c = 1;
        for(int j = 1; j < str.length(); j++)
        {
            if(str[j] == str[j-1])
            c++;
            else
            {
                newstr += v[c];
                newstr += ch;
                ch = str[j];
                c = 1; 
            }
        }
        newstr += v[c];
        newstr += ch;
        str = newstr;
    }
    // cout<<str;
    return str;   
    }
};
