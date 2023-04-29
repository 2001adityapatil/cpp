class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int pre = 0;
    for(auto x: arr)
    {
        pre = min(pre+1, x);
    }
    return pre;
    }
};
