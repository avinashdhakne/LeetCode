class Solution {
public:
    int findNextGreaterElement(int num, vector<int> &nums){
        int i=0;
        while(nums[i]!=num && i<nums.size()){
            i++;
        }
        
        int result = -1;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j] > num){
                result = nums[j];
                break;
            }
        }
        return result;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int num: nums1){
           result.push_back(findNextGreaterElement(num,nums2));
        }
        
        return result;
    }
};