class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long preSum = 0, result = 0;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
            result = max(result, (preSum + i)/(i + 1));
        }
        return result;
    }
};