// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if(numRows == 1)
        return {{1}};

    // intialize vector
    vector<vector<int>> res = {{1},{1,1}};

	// Itetrate from 2 as we initialize the array first
	for(int i = 2; i < numRows; i++)
	{
        // create a temparory vector which is empty
		vector<int> tmp = {};
        // pushing the first element from first index of last result vector
		tmp.push_back(res[i-1][0]);
        // iterate for i - 1 times to get the sum  of elements and push it back 
		for(int j = 0; j < i-1; j++)
		{
            // i.e res[2-1][0]+res[2-1][1]
            // res[1][0] + res[1][1]
            // 1+1 = 2
			tmp.push_back(res[i-1][j]+res[i-1][j+1]);	
		}
        // pushing the last element from last index of last result vector
		tmp.push_back(res[i-1][res.size()-1]);	
		
        // push tmp vector in result
		res.push_back(tmp);
	}  
    return res;
    }
};
