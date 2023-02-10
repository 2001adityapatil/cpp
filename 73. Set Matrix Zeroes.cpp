// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

 

// Example 1:


// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

class Solution {
    vector<vector<int>> transform(int row, int col, vector<vector<int>> nums)
{
	for(int i = 0; i < nums[row].size(); i++)
		{
            if(nums[row][i] == 0)
            continue;
            nums[row][i] = -10;
        }
	for(int i = 0; i < nums.size(); i++)
	{
        if(nums[i][col] == 0)
            continue;
        nums[i][col] = -10;
    }	
		
	return nums;
}

public:
    void setZeroes(vector<vector<int>>& nums) {
 
    //iterating over the matrix       
	for(int i = 0; i < nums.size(); i++)
	{
		for(int j = 0; j < nums[i].size(); j++)
		{
            // when we found the zero calling the function tranform
            // which will transform the row and column into -10
			if(nums[i][j] == 0)
			{
            	nums = transform(i, j, nums);
			}
		}
	}
    // again looping through the matrix and where we put -10 putting the zero value again
     for(int i = 0; i < nums.size(); i++)
	{
		for(int j = 0; j < nums[i].size(); j++)
		{
            if(nums[i][j] == -10)
            nums[i][j] = 0;
        }
    }
  
    }
};
