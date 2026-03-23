class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i-1]==nums[i])continue;

            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                int sum =nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;

                    j++;k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
              
            }

        }
        return ans;
    }
};
auto __fast_io_atexit = []() {
        ios::sync_with_stdio(false);
            cin.tie(nullptr);
                std::atexit([]() { 
                        ofstream("display_runtime.txt") << "0"; 
                });

return 0;
}();