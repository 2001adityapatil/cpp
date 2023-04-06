class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, int>> res;
    for(int i = 0; i < position.size(); i++)
    {
        res.push_back(make_pair(position[i], speed[i]));
    }   
    sort(res.begin(), res.end());
    stack<float> st;
    for(int i = 0; i < position.size(); i++)
    {
        float time = (float) (target - res[i].first) / (float)res[i].second;
        while(!st.empty() && st.top() <= time)
        st.pop();

        st.push(time);
    }
    return st.size();
    }
};
