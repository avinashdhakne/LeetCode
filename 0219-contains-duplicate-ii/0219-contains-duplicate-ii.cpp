class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> vect;
        for(int i=0; i<nums.size(); i++){
            if(vect.count(nums[i])>0){
                if(abs(vect[nums[i]]-i) <= k){
                    return true;
                }
            }
            vect[nums[i]] = i;
        }
        return false;
    }
};