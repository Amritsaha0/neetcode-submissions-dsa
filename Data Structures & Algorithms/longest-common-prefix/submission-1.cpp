class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 0) {
            return "";
        }

        if (strs.size() == 1) {
            return strs[0];
        }
        
        int i = 0;
        for (i = 0; i < strs[0].size(); i++) {
            char p = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (i >= strs[j].size() || p != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, i);
    }
};