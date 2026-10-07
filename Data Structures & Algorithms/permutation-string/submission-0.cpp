class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(n > m) return false;

        vector<int> mp(26, 0);

        for(char c : s1) {
            mp[c - 'a']++;
        }

        int left = 0;

        for(int right = 0; right < m; right++) {
            mp[s2[right] - 'a']--;

            if(right - left + 1 > n) {
                mp[s2[left] - 'a']++;
                left++;
            }

            if(right - left + 1 == n) {
                bool valid = true;

                for(int i = 0; i < 26; i++) {
                    if(mp[i] != 0) {
                        valid = false;
                        break;
                    }
                }

                if(valid) return true;
            }
        }

        return false;
    }
};