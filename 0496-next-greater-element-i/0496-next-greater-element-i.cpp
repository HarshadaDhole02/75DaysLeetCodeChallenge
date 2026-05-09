class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        stack<int> s;

    for(int i=nums2.size()-1 ; i>=0 ;i--)
    {
        while(s.size()>0 && s.top()<= nums2[i])
        {
            s.pop();
        }
        if(s.empty()) 
        {
            mpp[nums2[i]]=-1;
        }
        else
        {
            mpp[nums2[i]]=s.top();
        }
        s.push(nums2[i]);
    }
    vector<int>ans;
    for(int j=0;j<nums1.size();j++)
    {
        ans.push_back(mpp[nums1[j]]);
    }
    return ans;
    }

};