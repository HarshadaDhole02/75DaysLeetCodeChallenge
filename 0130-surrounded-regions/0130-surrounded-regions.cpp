class Solution {
public:
void bfs(int row,int col,vector<vector<char>>& board,vector<vector<int>>&visited)
{
      int  n = board.size();
        int m = board[0].size();
    int delrow[]= {-1,0,1,0};
    int delcol[]={0,1,0,-1};
    visited[row][col]=1;
    for(int i=0;i<4;i++)
    {
        int nrow=row+delrow[i];
        int ncol = col + delcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && board[nrow][ncol]=='O')
        {
            bfs(nrow,ncol,board,visited);
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int  n = board.size();
        int m = board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int j=0 ;j<m ;j++)
        {
            if(board[0][j]=='O' && !visited[0][j])
            {
                bfs(0,j,board,visited);
            }
        }
        for(int j=0;j<m;j++)
        {
            if(board[n-1][j]=='O' && !visited[n-1][j])
            {
                bfs(n-1,j,board,visited);
            }
        }
         for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O' && !visited[i][0])
            {
                bfs(i,0,board,visited);
            }
        }
         for(int i=0;i<n;i++)
        {
            if(board[i][m-1]=='O' && !visited[i][m-1])
            {
                bfs(i,m-1,board,visited);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] && board[i][j]=='O')
                {
                    board[i][j]='X';
                }
            }
        }
    }
};