class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        int combinations = 1 << n;
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        for(int mask=0; mask<combinations; mask++){
            vector<int> subset;
            for(int j = 0; j<n; j++){
                if((mask >> j) & 1){
                    subset.push_back(nums[j]);
                }
            }
            result.insert(subset);
        }
        
        vector<vector<int>> ans(result.begin(), result.end());
        return ans;
    }
};