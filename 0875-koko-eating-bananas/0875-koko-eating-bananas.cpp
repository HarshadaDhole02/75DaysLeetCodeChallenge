class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long mid, st=1, end=*max_element(piles.begin(), piles.end()), count, n = piles.size();

        while(st<=end)
        {
            mid = st + (end - st)/2;
            count = 0;

            for(int i=0;i<n;i++)
            {
                count += ((piles[i]-1)/mid) + 1;

            }
            if(count<=h)
            {
                end = mid-1;
            }
            else
            {
                st = mid+1;
            }
        }
        return st;
    }
};