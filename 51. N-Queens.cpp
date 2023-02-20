
// extra time complexity .... O(n) + O(n) + O(n)
class Solution {
    bool solve(int row, int col, vector<string> board, int n)
{
	int duprow = row;
	int dupcol = col;
	
	while(row >= 0 && col >= 0) {
		if(board[row][col] == 'Q') 
		return false;
		
		row--;
		col--;
	}
	
	col = dupcol;
	row = duprow; 
	while(col >= 0)
	{
		if(board[row][col] == 'Q')
		return false;
		
		col--;
	}
	col = dupcol;
	row = duprow;
	while(row<n && col>=0)
	{
		if(board[row][col] == 'Q')
		return false;
		row++;
		col--;
	}
	return true;
}

void nqueens(int col, vector<string> &board, vector<vector<string>> &ans, int n)
{
	if(col == n)
	{
		ans.push_back(board);
		return;
	}
	
	for(int row  = 0; row < n; row++)
	{
		if(solve(row, col, board, n))
		{
			board[row][col] = 'Q';
			nqueens(col+1, board, ans, n);
			board[row][col] = '.';
		}
	}
}
public:
    vector<vector<string>> solveNQueens(int n) {
      vector<vector<string>> ans;
	vector<string> board(n);
	string s(n,'.');
	
	
	for(int i = 0; i < n; i++)
		board[i] = s;
		

	nqueens(0, board, ans, n);

    return ans;  
    }
};
