class Solution {
public:

    bool isEqual(vector<int>& a, vector<int>& b) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

       
        if (s1.length() > s2.length()) {
            return false;
        }

        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);

       
        for (char ch : s1) {
            s1Freq[ch - 'a']++;
        }

        int windowSize = s1.length();

      
        for (int i = 0; i < windowSize; i++) {
            windowFreq[s2[i] - 'a']++;
        }

        if (isEqual(s1Freq, windowFreq)) {
            return true;
        }

        
        for (int i = windowSize; i < s2.length(); i++) {

           
            windowFreq[s2[i] - 'a']++;

           
            windowFreq[s2[i - windowSize] - 'a']--;

           
            if (isEqual(s1Freq, windowFreq)) {
                return true;
            }
        }

        return false;
    }
};