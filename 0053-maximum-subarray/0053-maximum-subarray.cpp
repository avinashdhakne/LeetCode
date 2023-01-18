class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int curMax = 0, maxSum = nums[0];
        for(auto a: nums){
            curMax = max(curMax + a, a);
            maxSum = max(curMax, maxSum);
        }
        return maxSum;
    }
};