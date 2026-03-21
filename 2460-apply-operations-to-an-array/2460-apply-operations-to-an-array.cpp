class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        queue<int> q;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]= 2*nums[i];
                nums[i+1]=0;
            }
        }
     
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]!=0)
                {
                    q.push(nums[i]);
                }
        }
        int j=0;
        while(!q.empty())
        {
            nums[j]= q.front();
            j++;
            q.pop();
        }
        while(j< nums.size())
        {
            nums[j]=0;
            j++;
        }
        return nums;
    }
};