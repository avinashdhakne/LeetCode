class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result(2,0);
        
        for(int j=0; j<nums.size(); j++){
            auto iter = find(nums.begin(), nums.end(), target - nums[j]);
            if((iter != nums.end() && (j != iter - nums.begin()))){
                result[0] = j;
                result[1] = iter - nums.begin();
                break;
            }
        }
        return result;
    }
};