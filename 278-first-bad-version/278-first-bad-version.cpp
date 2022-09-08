// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int min = 0;
        int max = n;
        int mid;
        while(min<=max){
            mid = min + (max-min)/2;
//            cout<<mid<<endl;    `
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            
            if(isBadVersion(mid) == true)
                max = mid-1;
            else min = mid+1;
        }
        return mid;
    }
};