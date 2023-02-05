class Solution {
public:
    void getSubset(vector<int> &nums, vector<vector<int>> &result, vector<int> &combs, int index){
        result.push_back(combs);
    
        for(int i=index; i<nums.size(); i++){
            if(i>index && nums[i] == nums[i-1]) continue;
            combs.push_back(nums[i]);
            getSubset(nums, result, combs, i+1);
            combs.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> comb;
        sort(nums.begin(), nums.end());
        getSubset(nums, result, comb, 0);
        return result;
    }
};