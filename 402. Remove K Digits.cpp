class Solution {
public:
    string removeKdigits(string num, int k) {
    if(k == 0)
    return num;
    if(num.length() <= k)   
            return "0";
    stack<char> st;
    for(int i = 0; i < num.length(); i++)
    {
        int tmp = num[i];
        while(k > 0 && !st.empty() && st.top() > tmp)
        {
            --k;
            st.pop();
        }
        
        if(!st.empty() || tmp != '0')
        st.push(tmp);

    }    
    string str = "";
    while(k && !st.empty())
    {  
        --k;
        st.pop();
    }
    
    while(!st.empty())
    {
        str.push_back(st.top()); 
        st.pop();
    }
    reverse(str.begin(), str.end());
    
    if(str.size() == 0)
        return "0";
    
    return str;
    
    }
};
