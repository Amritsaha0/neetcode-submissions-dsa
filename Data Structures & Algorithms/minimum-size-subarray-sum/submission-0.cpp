class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int lp = 0;
        int c = INT_MAX;
        int sum = 0;

        for(int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while(sum >= target) {
                c = min(c, r - lp + 1);
                sum -= nums[lp];
                lp++;
            }
        }

        if(c == INT_MAX)
            return 0;

        return c;
    }
};