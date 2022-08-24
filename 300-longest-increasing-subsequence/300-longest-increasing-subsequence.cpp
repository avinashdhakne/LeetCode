class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> vect(n,1);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(nums[i] > nums[j]){
                   vect[i] = max(vect[i], 1+vect[j]); 
                }
            }
        }
        
        return *max_element(vect.begin(), vect.end());
        
    }  
};