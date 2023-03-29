#include<bits/stdc++.h>
int blackbox(int mid, vector<vector<int>> matrix)
{
    int sum = 0;
    for(int i = 0; i < matrix.size(); i++)
    {
        int ans = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        sum += ans;
    }
    return sum;
}
int getMedian(vector<vector<int>> &matrix)
{
    // Brute Force
    // vector<int> ans;
    // for(int i = 0; i < matrix.size(); i++)
    // {
    //     for(int j = 0; j < matrix[i].size(); j++)
    //     ans.push_back(matrix[i][j]);
    // }
    // sort(ans.begin(), ans.end());

    // int left = 0;
    // int right = ans.size();
    // int mid = (left + right) / 2;

    // return ans[mid];

    int left = 1;
    int right = 10e9;
    int n = matrix.size();
    int m = matrix[0].size();
    while(left <= right)
    {
        int mid = (left + right) / 2;

        int no = blackbox(mid, matrix);

        if(no <= (n*m)/2)
        left = mid + 1;
        else
        right = mid - 1;
    }
    return left;
}
