class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int len = r-l;
        int h = min(heights[l], heights[r]);
        int curr_area = len*h; 
        int max_area = curr_area; 


        while(l < r){
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
            len -=1;
            h = min(heights[l], heights[r]);
            curr_area = len*h;
            max_area = max_area < curr_area ? curr_area : max_area;


        }
        return max_area;
    }
};
