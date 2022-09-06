class Solution {
public:
    void findCombination(vector<vector<int>> &result, vector<int> &ans, int index, 
                         vector<int> &arr, int target) {
        if(arr.size() == index){
            if(target==0){
                result.push_back(ans);
            }
            return;
        }
        
        if(arr[index] <= target){
            ans.push_back(arr[index]);
            findCombination(result, ans, index, arr, target-arr[index]);
            ans.pop_back();
        }
        findCombination(result, ans, index+1, arr, target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        findCombination(result, ans, 0, candidates, target);
        return result;
    }
};