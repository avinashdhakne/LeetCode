class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        
        for(int i=0; i<nums.size()-1; i++){
            int target = -nums[i];
            int start = i+1;
            int end = nums.size()-1;
            while(start < end){
                if((nums[start] + nums[end]) == target){
                    vector<int> temp = {nums[start],nums[end],nums[i]};
                    result.insert(temp);
                    start++; end--;
                }
                else if((nums[start] + nums[end]) > target){
                    end--;
                }
                else if((nums[start] + nums[end]) < target){
                    start++;
                }
            }
        }
        vector<vector<int>> ans (result.begin(), result.end());
        return ans;
    }
};