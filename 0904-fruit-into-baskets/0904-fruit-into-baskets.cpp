class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> basket;
        int l=0 , maxfru =0;
        for(int r=0;r<fruits.size();r++)
        {
            basket[fruits[r]]++;

            while(basket.size()>2)
            {
                basket[fruits[l]]--;
                if(basket[fruits[l]]==0)
                {
                    basket.erase(fruits[l]);
                }
                l++;
            }
            maxfru = max(maxfru,r-l+1);
        }
        return maxfru;
    }
};