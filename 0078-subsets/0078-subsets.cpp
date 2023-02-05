class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int combinations = 1 << n;
        vector<vector<int>> result;
        
        for(int mask=0; mask<combinations; mask++){
            vector<int> subset;
            for(int j = n-1; j>=0; j--){
                if((mask >> j) & 1){
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        return result;
    }
};