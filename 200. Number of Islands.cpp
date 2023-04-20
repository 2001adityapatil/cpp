class Solution {
public:
    void matrixcheck(int row, int col, int m, int n, vector<vector<char>> &grid)
    {
        if(row < 0 || row >= m || col < 0 || col >= n || grid[row][col] != '1')
        return;

        grid[row][col] = '2';

        matrixcheck(row+1, col, m, n, grid);
        matrixcheck(row, col+1, m, n, grid);
        matrixcheck(row-1, col, m, n, grid);
        matrixcheck(row, col-1, m, n, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(grid[i][j] == '1')
            {
                matrixcheck(i, j, rows, cols, grid);
                ans += 1;
            }
        }        
    }
    return ans;
    }
};
