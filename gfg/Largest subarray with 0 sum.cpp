// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

// Example 1:

// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.

// Solution: we are calculating the sum and checking if prefix sum is equal to 0 or not if yes getting the length else checking the sum is available in map if yes 
// then checking the sum we get is has greater length or the previous calculated has greater length in else we are just adding the pair of prefix sum with index.
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&v, int n)
    {   
        // Your code here
        unordered_map<int,int> mpp;
        int sum = 0;
	int maxi = 0;
	for(int i = 0; i < n; i++)
	{
		sum += v[i];
		if(sum == 0)
		{
			maxi = i + 1;
		}
		else
		{
			if(mpp.find(sum) != mpp.end())
			{
				maxi = max(maxi, i - mpp[sum]);
			}
			else {
				mpp[sum] = i;
			}
		}
	}
	return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
