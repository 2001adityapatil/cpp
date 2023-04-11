class Solution {
public:
    int calculate(string s) {

    stack<int> st;
    char sign = '+';
    long long ans = 0, curr = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i]))
        curr = curr * 10 + (s[i] - '0');

        if(!isdigit(s[i]) && s[i] != ' ' || i == s.size()-1)
        {
            if(sign == '+')
            st.push(curr);
            else if(sign == '-')
            st.push(curr*(-1));
            else if(sign == '*')
            {
                int tmp = st.top();
                st.pop();
                st.push(tmp * curr);
            }
            else if(sign == '/')
            {
                int tmp = st.top();
                st.pop();
                st.push(tmp / curr);
            }
            sign = s[i];
            curr = 0;
        }
    } 

    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
    }
};
