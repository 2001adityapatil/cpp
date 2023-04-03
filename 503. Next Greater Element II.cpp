class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> ans(nums.size(), 0);
    stack<int> st;
    for(int i = (2 * nums.size())-1; i >= 0; i--)
    {
        while(!st.empty() && st.top() <= nums[i % nums.size()])
        st.pop();

        if(!st.empty())
            ans[i%nums.size()] = st.top();
        else
            ans[i%nums.size()] = -1;

        st.push(nums[i % nums.size()]);
    }
    return ans;
    }
};
