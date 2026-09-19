class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==0)return-1;
        if(nums.size()==1)return nums[0];
        sort(nums.begin(),nums.end());

        if(nums[nums.size()/2] == nums[(nums.size()/2)-1]  || nums[nums.size()/2] == nums[(nums.size()/2)+1]){
            return nums[nums.size()/2];
        }

        return -1;
    }
};