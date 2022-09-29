class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int start = 0, end = arr.size() - 1;
        
        while(end - start >= k){
            if(abs(arr[start]-x) > abs(arr[end]-x)) 
                start++;
            else 
                end--;
        }
        
        cout<<start<<" "<<end<<endl;
        
        for(int i=start; i <= end; i++){
            result.push_back(arr[i]);
        }
        
        return result;
    }
};