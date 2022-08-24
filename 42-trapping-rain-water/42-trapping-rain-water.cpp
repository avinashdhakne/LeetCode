class Solution {
public:
    int trap(vector<int>& height) {
       int length = height.size();
        vector<int> right(length, 0);
        vector<int> left(length, 0);
        
        int maxNum = height[0];
        
        for(int i=0; i<length; i++) {
            if(maxNum>=height[i]) right[i] = maxNum;
            else maxNum = height[i];
            right[i] = maxNum;
        }
        
        maxNum = height[length-1];
        
        for(int i=length-1; i>=0; i--) {
            if(maxNum>=height[i]) left[i] = maxNum;
            else maxNum = height[i];
            left[i] = maxNum;
        }
        
        int area = 0;
        for(int i=0; i<length; i++) {
            area = area + (min(right[i],left[i]) - height[i]);
        }
        
        return area;
    }
};