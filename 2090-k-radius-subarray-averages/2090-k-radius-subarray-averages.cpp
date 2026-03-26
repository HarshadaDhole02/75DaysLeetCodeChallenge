class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> copy(nums.size(),-1);
        long long  sum =0;
        int l =0;
        for( int r=0;r<nums.size();r++)
        {
            sum = sum+nums[r];
            if(r-l+1 > 2*k+1)
            {
                sum = sum - nums[l];
                l++;
            }
            if(r-l+1 == 2*k+1)
            {
                int s = r-l+1;
               int mid = (l+r)/2;
               copy[mid] = sum / s; 
            }
        }
        return copy;
    }
};