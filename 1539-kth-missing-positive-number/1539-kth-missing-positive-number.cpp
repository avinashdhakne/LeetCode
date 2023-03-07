class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size()-1;
        
        int last_missing = (arr[end] - (end + 1));
        if(k > last_missing){
            return end + k + 1;
        }
        
        while(start <= end){
            int mid = start + (end - start)/2;
            int missing = (arr[mid]-(mid+1));
            if(missing < k)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return start + k;
    }
};