class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int result = 0;
        if(nums1.size()&1){
            for(auto i: nums2){
                result ^= i;
            }
        }
        
         if(nums2.size()&1){
            for(auto i: nums1){
                result ^= i;
            }
        }
        
        return result;
    }
};