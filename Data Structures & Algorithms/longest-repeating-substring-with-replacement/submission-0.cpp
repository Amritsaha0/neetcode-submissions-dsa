class Solution {
public:
    int characterReplacement(string s, int k) {
        int n =s.length();
;        int lp = 0;
        int maxFreq = 0;
        int ans = 0;
        unordered_map<char,int> mp;

        for(int rp = 0; rp < n; rp++) {

            mp[s[rp]]++;

            maxFreq = max(maxFreq, mp[s[rp]]);

            while((rp - lp + 1) - maxFreq > k) {
                mp[s[lp]]--;
                lp++;
            }

            ans = max(ans, rp - lp + 1);

        }
        return ans;
    }

};
