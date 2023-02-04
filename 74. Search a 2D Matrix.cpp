// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

 

// Example 1:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104

#approach 2 ---- binary search on both lists

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& vec, int target) {

    int l = 0;
	int r = vec.size() - 1;
	
	int mid;
    while(l <= r)
	{
		mid = (l+r)/2;
		
		if(vec[mid][0] <= target && vec[mid][vec[mid].size()-1] >= target)
		{   
            
            break;
        }
		
		if(vec[mid][0] > target)
		r = mid - 1;
		
		if(vec[mid][0] < target)
		l = mid + 1;
	}

    	l = 0;
		r = vec[mid].size() - 1;
		
		while(l <= r)
		{
			int middle = (l+r)/2;
			
			if(vec[mid][middle] == target)
			return true;
			
			if(vec[mid][middle] < target)
			l = middle + 1;
			else
			r = middle - 1;	
		}

        return false;
	  
    }
};

 
#using simple approach using single binary search on every list

  int c = 0;
	for(int i = 0; i < vec.size(); i++)
	{
		
		int l = 0;
		int r = vec[i].size() - 1;
		
		while(l <= r)
		{
			int mid = (l+r)/2;
			
			if(vec[i][mid] == target)
			{
				c = 1;
				break;
			}
			
			if(vec[i][mid] < target)
			l = mid + 1;
			else
			r = mid - 1;	
		}
		if(c == 1)
		break;		
	}
	if(c == 1)
	return true;
	else
	return false;
