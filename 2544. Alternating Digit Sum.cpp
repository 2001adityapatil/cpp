class Solution {
public:
    int alternateDigitSum(int n) {
    vector<int> res;
    while(n > 0)
    {
        int r = n%10;
        res.push_back(r);
        n/=10;
    }
    int sum = 0;
    for(int i = 0; i < res.size(); i++)
    {
        if(i%2 == 1)
        sum -= res[res.size()-i-1];
        else
        sum += res[res.size()-1-i];
    }
    return sum;
    }
};
