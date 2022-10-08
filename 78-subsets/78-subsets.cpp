class Solution {
public:
    void findsubsets(vector<vector<int>> &result, vector<int> nums, vector<int> output, int index){
        if(index>=nums.size()){
            result.push_back(output);
            return;
        }
        
        findsubsets(result,nums,output,index + 1);
        
        output.push_back(nums[index]);
        findsubsets(result,nums,output,index + 1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> result;
        int index = 0;
        findsubsets(result,nums,output,index);
        return result;
    }
};