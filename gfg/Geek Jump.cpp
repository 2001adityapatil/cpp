
class Solution {
  public:
    int recursion(int ind, vector<int> &height, vector<int> &dp)
    {
        if(ind == 0)
        return 0;
        
        if(dp[ind] != -1)
        return dp[ind];
        
        int left = recursion(ind-1, height, dp) + abs(height[ind-1] - height[ind]);
        int right = INT_MAX;
        if(ind > 1)
        right = recursion(ind-2, height, dp) + abs(height[ind-2] - height[ind]);
        
        return dp[ind] = min(left, right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n, -1);
        return recursion(n-1, height, dp);
    }
};

