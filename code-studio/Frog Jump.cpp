#include <bits/stdc++.h> 
// int recursion(int ind, vector<int> &heights, vector<int> &dp)
// {
//     if(ind == 0) return 0;
//     if(dp[ind] != -1) return dp[ind];
//     int right = INT_MAX;
//     int left = recursion(ind-1, heights, dp) + abs(heights[ind] - heights[ind-1]);
//     if(ind > 1)
//         right = recursion(ind-2, heights, dp) + abs(heights[ind] - heights[ind-2]);

//     dp[ind] = min(left,right);
//     return dp[ind];
    
// }
int frogJump(int n, vector<int> &heights)
{   
    // vector<int> dp(n+1, -1);
    // return recursion(n-1, heights, dp);

    vector<int> dp(n, 0);
    dp[0] = 0;
    for(int i = 1; i < heights.size(); i++)
    {
        int right = INT_MAX;
        int left = dp[i-1] + abs(heights[i] - heights[i-1]);
        if(i > 1)
        right = dp[i-2] + abs(heights[i] - heights[i-2]);

        dp[i] = min(left, right);
    }
    return dp[n-1];
}
