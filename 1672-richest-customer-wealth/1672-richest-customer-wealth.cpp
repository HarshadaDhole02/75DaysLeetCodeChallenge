class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
      int maxi=0;
        int i=0 , j=0;
        int sum=0;
        for(i=0;i<n;i++)
        {
             sum=0;
            for(int j=0;j<m;j++)
            {
            sum += accounts[i][j];
            }
             if(sum>maxi)
        {
            maxi=sum;
        }
    
            
        }
      return maxi;  
    }
   
};