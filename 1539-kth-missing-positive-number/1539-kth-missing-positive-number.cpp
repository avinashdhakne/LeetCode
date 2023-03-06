class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing;
        int count = 0;
        int i = 0;
        int j = 1;
        while(count != k){
            if(i<arr.size() && arr[i] == j){
                i++;
                j++;
            }
            else{
                count++;
                missing = j;
                j++;
            }
            
        }
        
        return missing;
    }
};