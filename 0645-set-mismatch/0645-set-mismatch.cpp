class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> vect(n);
        for(auto i: nums){
            vect[i-1]++;
        }
        
        vector<int> result;
        for(int i=0; i<n; i++){
            if(vect[i]==2){
                result.push_back(i+1);
            }
       
        }
        
        for(int i=0; i<n; i++){
           
            if(vect[i]==0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};