class Solution {
public:
    int lengthOfLongestSubstring(string s) {//set 
        set <char> st;
        int l=0 ,r =0;
        int maxlength = 0;
        int n = s.size();

        while(r<n)
        {
            if(st.find(s[r]) == st.end())
            {
                st.insert(s[r]);
                maxlength = max(maxlength ,r-l+1);
                r++;
            }
            else
            {
                st.erase(s[l]);
                l++;
            }
        }
        return maxlength;
    }
};