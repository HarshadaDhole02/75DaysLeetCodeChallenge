class Solution {
private:
void dfs(int row , int col , vector<vector<int>> &ans,vector<vector<int>>& image, int delrow[],int delcol[], int color,int initial)
{
int n = image.size();
int m = image[0].size();
ans[row][col]= color;
for(int i=0 ;i<4 ;i++)
{
    int newrow = row + delrow[i];
    int newcol = col + delcol[i];

    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && image[newrow][newcol]==initial && ans[newrow][newcol]!=color)
    {
        dfs(newrow,newcol,ans,image,delrow,delcol,color,initial);
    }
}
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial = image[sr][sc];
        vector<vector<int>> ans = image;
        int delrow[] = {-1,0,1,0};
        int delcol []= {0,1,0,-1};
        dfs(sr,sc,ans,image,delrow,delcol,color,initial);
        return ans;
    }
};