class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int> st;
    for(int i = 0; i < pushed.size(); i++)
    {
        if(pushed[i] != popped[0])
            st.push(pushed[i]);
        else
            popped.erase(popped.begin() + 0);

        while(!st.empty() && popped[0] == st.top())
        {
            popped.erase(popped.begin() + 0);
            st.pop();
        }
  
    }   
   
    if(popped.size() != 0)
    return false;

    return true;
    }
};
