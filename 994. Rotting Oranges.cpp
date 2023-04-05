// put all the rotten eggs in queue mark it as visited keep a count of fresh eggs iterate over the queue get the row col and timer check it in all four direction if it can rotten another egg mark it as rotten in visited

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    	int n = grid.size();
	int m = grid[0].size();
	int maxi = 0;
	int vis[n][m];
	queue<pair<pair<int, int>, int>> q;
	int cntFresh = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(grid[i][j] == 2)
			{
				q.push({{i, j}, 0});
				vis[i][j] = 2;
			}
			else
			{
				vis[i][j] = 0;
			}
			
			if(grid[i][j] == 1)
			cntFresh++;
		}
	}
	int cnt = 0;
	int drow[] = {-1, 0, 1, 0};
	int dcol[] = {0, 1, 0, -1};
	while(!q.empty())
	{
		int i = q.front().first.first;
		int j = q.front().first.second;
		int ind = q.front().second;
		q.pop();
		
//		ind++;
		
		maxi = max(maxi, ind);
		
		for(int a = 0; a < 4; a++)
		{
			int nrow = i + drow[a];
			int ncol = j + dcol[a];
			
			
			if(nrow>=0 && nrow < n && ncol>=0 && ncol < m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1)
			{
				q.push({{nrow, ncol}, ind+1});
				vis[nrow][ncol] = 2;
				cnt++;
			}
		}
	}
	
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(vis[i][j] != 2 && grid[i][j] == 1)
//			cout<<-1;
//		}
//	}
	if(cnt != cntFresh)
	return -1;
	
	return maxi;   
    }
};
