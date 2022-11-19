class Solution {
public:
    
    int findArea(int x1,int x2,int y1,int y2){
        int a = abs(x2-x1);
        int b = abs(y2-y1);
        return a*b;
    }
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = findArea(ax1,ax2,ay1,ay2);
        int area2 = findArea(bx1,bx2,by1,by2);
        
        int cx1 = max(ax1,bx1), cy1 = max(ay1,by1);
        int cx2 = min(ax2,bx2), cy2 = min(ay2, by2);
        
        int intersection = 0;
        if(cx1 < cx2 && cy1 < cy2)
            intersection = findArea(cx1,cx2,cy1,cy2);
        
        return area1+area2 - intersection;
    }
};