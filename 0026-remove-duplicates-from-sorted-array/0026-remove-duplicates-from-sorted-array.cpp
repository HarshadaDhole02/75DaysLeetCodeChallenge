class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> myset(nums.begin(),nums.end());
        nums.assign(myset.begin(),myset.end());
        return nums.size();
    }
};