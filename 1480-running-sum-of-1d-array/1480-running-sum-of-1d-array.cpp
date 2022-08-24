class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> result(nums.size(),0);
            
            for(int i=0; i<nums.size(); i++){
                sum += nums[i];
                result[i] = sum;
                
            }
        
        return result;
        
    }
};