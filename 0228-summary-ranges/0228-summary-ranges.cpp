class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if(nums.size() < 1) return result;
        
        for(int i=0; i<nums.size(); i++){
            int s = i;
            while(i+1 < nums.size() && nums[i]+1 == nums[i+1]) i++;
            int e = i;
            if(s==e) result.push_back(to_string(nums[s]));
            else result.push_back(to_string(nums[s]) + "->" + to_string(nums[e]));
        }
        return result;
    }
};