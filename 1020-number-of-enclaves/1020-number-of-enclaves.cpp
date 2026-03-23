class Solution {
public:

    void dfs(int row , int col ,vector<vector<int>>& grid,vector<vector<int>>&visit )
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
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visit[nrow][ncol] && grid[nrow][ncol]==1)
            {
                dfs(nrow,ncol,grid,visit);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt =0;
        vector<vector<int>> visit(n,vector<int>(m,0));
        // row and col traversing 
        for(int j=0;j<m;j++)
        {
            if(!visit[0][j] && grid[0][j]==1)
            {
                dfs(0,j,grid, visit);
            }
        }
        for(int j=0;j<m;j++)
        {
            if(!visit[n-1][j] && grid[n-1][j]==1)
            {
                dfs(n-1,j,grid,visit);
            }
        }
        for(int i=0;i<n ;i++)
        {
            if(!visit[i][0] && grid[i][0]==1)
            {
                dfs(i,0,grid,visit);
            }
        }
        for(int i=0;i<n ;i++)
        {
            if(!visit[i][m-1] && grid[i][m-1]== 1)
            {
                dfs(i,m-1,grid,visit);
            }
        }
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visit[i][j] && grid[i][j]==1)
                {
                    cnt = cnt +1;
                }
            }
        }
        return cnt;
    }
};