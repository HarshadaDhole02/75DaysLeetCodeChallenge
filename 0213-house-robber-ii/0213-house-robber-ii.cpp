class Solution {
public:
    int result(vector<int>& nums, int n) {
        int prev = nums[0];
        int prev2 = 0;

        for (int i = 1; i < n; i++) {
            int take = nums[i];
            if (i > 1) take += prev2;
            int nottake = prev;
            int curi = max(take, nottake);

            prev2 = prev;
            prev = curi;
        }    
        return prev;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        vector<int> temp1, temp2;

        for (int i = 0; i < n - 1; i++)
            temp1.push_back(nums[i]);

       
        for (int i = 1; i < n; i++)
            temp2.push_back(nums[i]);

        return max(result(temp1, temp1.size()), result(temp2, temp2.size()));
    }
};
