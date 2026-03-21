class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                q.push(nums[i]);
            }
        }
        int i=0;
        while(!q.empty())
        {
            nums[i] = q.front();
            i++;
        q.pop();
       
         }
         while(i<nums.size())
         {
            nums[i]=0;
            i++;
         }
       
    }
};