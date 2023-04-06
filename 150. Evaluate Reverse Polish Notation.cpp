class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<long long int> st;
    for(int i = 0; i < tokens.size(); i++)
    {
        long long int first;
        long long int second;
        if(tokens[i] == "+")
        {   
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();
            st.push(second + first);
        }
        else if(tokens[i] == "/")
        {   
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();
            st.push(second / first);
        }
        else if(tokens[i] == "*")
        {   
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();
            st.push(second * first);
        }
        else if(tokens[i] == "-")
        {   
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();
            st.push(second - first);
        }
        else
        {
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
    }
};
