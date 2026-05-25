class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int> freq(26, 0);

        // count frequency
        for(char ch : tasks) {
            freq[ch - 'A']++;
        }

        // maximum frequency
        int maxFreq = *max_element(freq.begin(), freq.end());

        // how many tasks have max frequency
        int countMax = 0;

        for(int f : freq) {
            if(f == maxFreq)
                countMax++;
        }

        int ans = (maxFreq - 1) * (n + 1) + countMax;

        return max((int)tasks.size(), ans);
    }
};