class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int result, mid;
        while(s<=e){
            mid = e + (s-e)/2;
            if((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid-1])){
                result = mid;
                break;
            }
            else if((arr[mid] > arr[mid+1]) && (arr[mid] < arr[mid-1])){
                e = mid - 1;
            }
            else if((arr[mid] < arr[mid+1]) && (arr[mid] > arr[mid-1])){
                s = mid + 1;
            }
        }
        return result;
    }
};