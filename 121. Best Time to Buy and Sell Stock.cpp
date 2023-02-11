// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Approach 1: Brute force using two loops we can iterate over the array calculate the max difference between the stocks and return it bt it will TLE

// Approach 2: optimal where we are finding the minimal value and while iterating over the array at same time getting the maximum value by difference between the minimal
// value that is obtain and the next stock value from the array.
  
class Solution {
public:
    int maxProfit(vector<int>& nums) {
//Brute force
        // if(nums.size() == 1)
        // return 0;

        // int min = 0;
	
	    // for(int i = 0; i < nums.size()-1; i++)
	    // {
		//     for(int j = i+1; j < nums.size(); j++)
		//     {
		//     	if(nums[j]-nums[i] > min)
		// 	    min = nums[j]-nums[i];	
		//     }	
	    // }

        // return min;

//       Optimize

        int mini = INT_MAX;
        int profit = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < mini)
            {
                mini = nums[i];
            }
            profit = max(profit,(nums[i] - mini));
        }
        return profit;

       
    }
};
  
