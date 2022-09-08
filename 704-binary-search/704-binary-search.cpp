class Solution {
public:
    
    int findIndex(int min, int max, vector<int> &nums, int target){
        int i=min;
        int j=max;
        cout<<i<<" "<<j<<endl;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid] > target){
                return findIndex(min,mid-1,nums,target);
            }
            if(nums[mid] < target){
                return findIndex(mid+1,max,nums,target);
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return findIndex(0, nums.size()-1, nums, target);
    }
};