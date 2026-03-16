class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int it : nums)
            map[it]++;

        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(map[a] == map[b])
                return a > b;   //large value
            return map[a] < map[b];
        });

        return nums;
    }
};