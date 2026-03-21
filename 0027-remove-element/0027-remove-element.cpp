class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       queue<int> q;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]!=val)
        {
            q.push(nums[i]);
        }
       } 
    int i=0;
    while(!q.empty())
    {
      nums[i]= q.front();
      i++;
        q.pop();
    }
return i;
    }
};