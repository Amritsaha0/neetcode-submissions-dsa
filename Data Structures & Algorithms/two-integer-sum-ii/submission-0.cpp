class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int lp=0,rp=n-1;

        while(lp<rp){
            if(numbers[lp]+numbers[rp]<target){
                lp++;
            }
            else if(numbers[lp]+numbers[rp]>target){
                rp--;                
            }
            else{
                return {lp+1,rp+1};
            }

        }
        return {};
        
    }
};
