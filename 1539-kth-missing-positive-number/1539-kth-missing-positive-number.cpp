class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int i = 0;
        int j = 1;
        while(missing.size() < k){
            if(i<arr.size() && arr[i] == j){
                i++;
                j++;
            }
            else{
                missing.push_back(j);
                j++;
            }
            
        }
        
        for(auto i: missing){
            cout<<i<<" ";
        }
        return missing[missing.size()-1];
    }
};