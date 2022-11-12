class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[i*2] = nums[i];
            ans[i*2+1] = nums[n+i];
        }
        return ans;
    }
};