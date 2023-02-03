class Solution {
public:
    void getCombs(vector<int> c, vector<vector<int>> &result, vector<int> &comb, int index, int sum, int target){
        if(sum == target){
            result.push_back(comb);  
            return;
        }
        
        for(int i=index; i<c.size(); i++){
            if(i > index && c[i] == c[i-1]) continue;
            int newSum = sum + c[i];
            if(newSum > target) break;
            comb.push_back(c[i]);
            getCombs(c, result, comb, i + 1, newSum, target);
            comb.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        getCombs(candidates, result, comb, 0, 0, target);
        return result;
    }
};