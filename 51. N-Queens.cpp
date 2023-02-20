void nqueens(int col, vector<string> &board, vector<vector<string>> &ans, int n, vector<int> &samerow, vector<int> &lowerdiagonal, vector<int> &upperdiagonal)
{
	if(col == n)
	{
		ans.push_back(board);
		return;
	}
	
	for(int row  = 0; row < n; row++)
	{
		if(samerow[row] == 0 && lowerdiagonal[row+col] == 0 && upperdiagonal[n-1+col - row] == 0)
		{
			board[row][col] = 'Q';
			samerow[row] = 1;
			lowerdiagonal[row+col] = 1;
			upperdiagonal[n-1+col - row] = 1;
			nqueens(col+1, board, ans, n,  samerow, lowerdiagonal, upperdiagonal);
			board[row][col] = '.';
			samerow[row] = 0;
			lowerdiagonal[row+col] = 0;
			upperdiagonal[n-1+col - row] = 0;
		}
	}
}



int main()
{
	int n = 4;
	
	vector<vector<string>> ans;
	vector<string> board(n);
	string s(n,'.');
	
	
	for(int i = 0; i < n; i++)
		board[i] = s;
		
	vector<int> samerow(n,0), upperdiagonal(2*n-1, 0), lowerdiagonal(2*n-1,0);
	nqueens(0, board, ans, n, samerow, lowerdiagonal, upperdiagonal);

	cout<<ans.size();
	
	return 0;
}
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
