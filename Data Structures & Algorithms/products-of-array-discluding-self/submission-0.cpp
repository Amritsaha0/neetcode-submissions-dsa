class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;

        int product = 1;
        int zero = 0;

        for (int x : nums) {
            if (x == 0) {
                zero++;
            } else {
                product *= x;
            }
        }

        for (int x : nums) {
            if (zero >= 2) {
                res.push_back(0);
            }
            else if (zero == 1) {
                if (x == 0)
                    res.push_back(product);
                else
                    res.push_back(0);
            }
            else {
                res.push_back(product / x);
            }
        }

        return res;
    }
};