// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover 
// all the intervals in the input.

// Example 1:
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

// Solution: 
// sort the array & assign a temp vector with 2d array index 0
// Iterate over the sorted array we are checking if the first value from the array that lies between th temp  vector if it lies push large value at the 2nd last index of 
// temp vector first value in temp vector remains same. Iterate till that values lies in the temp vector.
// If the value does not lies then push temp vector into result vector and empty the temp vector after that assign new values in temp vector from ith index of 2d vector
// In last if temp size is not zero then push it in result vector.
  
// tc nlogn + n

  
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
    for(int i = 0; i < nums.size(); i++)
	{
		sort(nums[i].begin(),nums[i].end());
	}
	sort(nums.begin(), nums.end());
	
	vector<int> tmp = nums[0];
	vector<vector<int>> res;
	
	for(int i = 1; i < nums.size(); i++)
	{
		if(nums[i][0] <= tmp[1])
		{
			if(tmp[1] > nums[i][1])
			tmp[1] = tmp[1];
			else
			tmp[1] = nums[i][1];
		}
		else
		{
			res.push_back(tmp);
			tmp = {};
			tmp.push_back(nums[i][0]);
			tmp.push_back(nums[i][1]);
		}
	}
	if(tmp.size() != 0)
	res.push_back(tmp);

    return res;
    }
};
