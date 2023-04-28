class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    multiset<pair<int, vector<int>>> st;
    vector<vector<int>> ans;

    for(int i = 0; i < points.size(); i++)
    {
        int val = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
        st.insert({val, points[i]});
    }

    for(auto x: st)
    {
        if(k == 0)
        break;

        ans.push_back(x.second);
        k--;
    }

    return ans;   
    }
};
