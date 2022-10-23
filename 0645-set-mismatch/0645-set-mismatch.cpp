class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vect(nums.size());
        for(auto i: nums){
            vect[i-1]++;
        }
        
        vector<int> result(2);
        for(int i=0; i<nums.size(); i++){
            if(vect[i]==2){
                result[0] = i+1;
            }
            
            if(vect[i]==0){
                result[1] = i+1;
            }
       
        }
    
        return result;
    }
};