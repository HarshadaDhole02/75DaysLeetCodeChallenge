class Solution {
public:

 void dfs(int row , int col ,vector<vector<char>>& grid,vector<vector<int>>& visit )
    {
        int n = grid.size();
        int m = grid[0].size();
        visit[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,-1,0,1};
        for(int i=0;i<4;i++)
        {
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && grid[nrow][ncol]=='1')
            {
                dfs(nrow,ncol,grid,visit);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !visit[i][j])
                {
                    count = count+1;
                    dfs(i,j,grid,visit);
                }
            }
        }
        return count;
    }
};