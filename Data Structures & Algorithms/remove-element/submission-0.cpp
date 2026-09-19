class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fp =0;
        int lp =0;
        int cnt=0;


        while(fp>=lp && fp < nums.size()){
            if(nums[fp]==val){
                fp++;
            }
            else{
                nums[lp]=nums[fp];
                lp++;
                fp++;
                cnt++;
            }
        }
        return cnt;
        
    }
};