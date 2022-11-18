class Solution {
public:
    
    void findpermutations(vector<int> nums, vector<vector<int>> &output, int index){
        if(index > nums.size()-1){
            output.push_back(nums); 
            return;
        }
        for(int j=index; j<nums.size(); j++){
            swap(nums[j],nums[index]); 
            findpermutations(nums , output, index+1);
            swap(nums[j],nums[index]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        findpermutations(nums, output, 0);
        
        return output;
    }
};