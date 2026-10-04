class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        unordered_map<char, int> mp;

        int lp = 0;
        int ans = 0;

        for(int rp = 0; rp < n; rp++) {

            mp[s[rp]]++;

            while(mp[s[rp]] > 1) {
                mp[s[lp]]--;
                lp++;
            }

            ans = max(ans, rp - lp + 1);
        }

        return ans;
    }
};