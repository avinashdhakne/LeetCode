class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int interval = arr.size() / 4;
        int result;
        
        for(int i=0; i<arr.size()-interval; i++){
            if(arr[i]==arr[i+interval]){
                result = arr[i];
            }
        }
        return result;
    }
};