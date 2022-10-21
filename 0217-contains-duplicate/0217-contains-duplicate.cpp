class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> vect;
        for(int i=0; i<nums.size(); i++){
            if(vect.count(nums[i])>0)
                return true;
            vect.insert(nums[i]);
        }
        return false;
    }
};