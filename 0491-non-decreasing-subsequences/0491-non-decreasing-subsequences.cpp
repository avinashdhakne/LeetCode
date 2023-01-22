class Solution {
public:
    void getsequnce(vector<int> nums, set<vector<int>> &result, vector<int> &seq, int index){
        if(index == nums.size()){
            if(seq.size() > 1)
                result.insert(seq);
            return;
        }
        if(seq.size() > 0){
            int currNum = seq.back();
            if((currNum <= nums[index])){
                seq.push_back(nums[index]);
                getsequnce(nums, result, seq, index + 1);
                seq.pop_back();
            }
            
        }
        else{
            seq.push_back(nums[index]);
            getsequnce(nums, result, seq, index + 1);
            seq.pop_back();
        }
        
        getsequnce(nums, result, seq, index+1);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> result;
        vector<int> seq;
        getsequnce(nums, result, seq, 0);
        
        vector<vector<int>> result1 (result.begin(), result.end());
        
        return result1;
    }
};