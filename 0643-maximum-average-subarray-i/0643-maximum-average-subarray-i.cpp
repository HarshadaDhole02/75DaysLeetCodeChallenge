
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double maximum = INT_MIN;
        int l = 0;

        for(int r = 0; r < nums.size(); r++) {
            sum += nums[r];   
            if(r - l + 1 > k) {
                sum -= nums[l];
                l++;
            }

            if(r - l + 1 == k) {
                maximum = max(maximum, sum);
            }
        }

        return maximum / k;
    }
};