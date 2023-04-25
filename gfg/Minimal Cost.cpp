
class Solution {
  public:
    int recursion(int ind, vector<int> &height, int k, vector<int> &dp)
    {
        if(ind == 0)
        return 0;
        
        int mcost = INT_MAX;
        
        if(dp[ind] != -1)
        return dp[ind];
        
        for(int i = 1; i <= k; i++)
        {
            if(ind-i >= 0)
            {
                int cost = recursion(ind-i, height, k, dp) + abs(height[ind] - height[ind-i]);
                mcost = min(mcost, cost);
            }
                
        }
        return dp[ind] = mcost;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
    
    vector<int> dp(n, -1);
    return recursion(n-1, height, k, dp);
        
    }
};

