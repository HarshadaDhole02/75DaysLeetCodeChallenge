class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int maxlen = 0, maxfreq = 0;
        int hash[26] = {0};

        while(r < s.size())
        {
            hash[s[r] - 'A']++;

            maxfreq = max(maxfreq, hash[s[r] - 'A']);

            int len = r - l + 1;

            if(len - maxfreq > k)
            {
                hash[s[l] - 'A']--;
                l++;

                maxfreq = 0;
                for(int i = 0; i < 26; i++)
                {
                    maxfreq = max(maxfreq, hash[i]);
                }

                len = r - l + 1;
            }

            maxlen = max(maxlen, len);

            r++;
        }

        return maxlen;
    }
};