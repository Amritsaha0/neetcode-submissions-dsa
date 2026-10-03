class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int voli = 0,vol=0;
        while(l<r){
            voli = min(heights[l],heights[r])*(r-l);
            vol = max (vol,voli);
            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }


        }
        return vol;
    }
};
