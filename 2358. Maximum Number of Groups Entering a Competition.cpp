class Solution {
public:
    int maximumGroups(vector<int>& grades) {
    int n = grades.size();
    int sum = 0, groups = 0;
    while(sum + groups < n)
    {
        groups++;
        sum += groups;
    }    
    return groups;
    }
};
