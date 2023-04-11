class Solution {
public:
    string removeDuplicates(string s) {
    // tle
    // stack<char> st;

    // for(int i = 0; i < s.size(); i++)
    // {
    //     if(!st.empty() && st.top() == s[i])
    //     {
    //         st.pop();
    //     }
    //     else
    //         st.push(s[i]);
    // }    
    // string newstr = "";
    // while(!st.empty())
    // {
    //     newstr = st.top() + newstr;
    //     st.pop();
    // }

    // // cout<<newstr;

    // return newstr;

    string ans = "";
    ans += s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(ans.back() == s[i])
        ans.pop_back();
        else
        ans += s[i];
    }
    return ans;
    }
};
