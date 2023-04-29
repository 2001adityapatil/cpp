class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
    // vector<long long> res;
    multiset<long long> res;
    for(int i = 0; i < nums.size(); i++)
    {
        long long sm = 0;
        for(int j = i; j < nums.size(); j++)
        {
            sm += nums[j];
            // res.push_back(sm);
            res.insert(sm);
        }
    }
    // sort(res.begin(), res.end());
    // long long sm = 0;
    // for(int i = left-1; i < right; i++)
    // sm += res[i];

    long long sm = 0;
    int l = 1;
    for(auto x: res)
    {
        if(l >= left)
        sm += x;

        if(l == right)
        break;

        l++;
    }

    // cout<<sm;
    return sm% 1000000007;
    }
};
