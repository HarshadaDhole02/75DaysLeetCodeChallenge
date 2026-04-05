class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<m;j++)
            {
            ans.push_back(matrix[i][j]);
            }
        }
        int low=0;
        int high = ans.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(target == ans [mid]) return true;
            else if(target<ans[mid]) high = mid-1;
            else
            low=mid+1;
        }
        return false;
    }
};