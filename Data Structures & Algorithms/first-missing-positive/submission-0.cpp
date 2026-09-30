class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;

        for(int x : nums) {
            if(x > 0)
                st.insert(x);
        }

        for(int i = 1; i <= nums.size() + 1; i++) {
            if(st.find(i) == st.end()) {
                return i;
            }
        }

        return -1;
    }
};