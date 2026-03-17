class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int , int > mpp;
      for(auto it : nums)
      {
        mpp[it]++;
      }  
      sort(nums.begin(),nums.end(),[&] (int a ,int b)
      {
        if(mpp[a]==mpp[b])
        {
            return a<b;
        }
        return mpp[a]<mpp[b];
      });
      unordered_set<int> s;//we cant return set so we need to store in vector
      vector<int> ans;              // and set store only unique elements
      for(int i = nums.size()-1;i>=0 && k>0 ;i--)
      {
        if(s.find(nums[i])==s.end()) // going through complete set and not found
        {
            s.insert(nums[i]);
            ans.push_back(nums[i]);
            k--;
        }
      }
      return ans;

    }
};