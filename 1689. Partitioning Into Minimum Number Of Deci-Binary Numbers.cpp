class Solution {
public:
    int minPartitions(string n) {
    int maxi = -1;
    for(auto s: n)
        maxi = max(maxi, s-'0');
    
    return maxi;
    }
};
