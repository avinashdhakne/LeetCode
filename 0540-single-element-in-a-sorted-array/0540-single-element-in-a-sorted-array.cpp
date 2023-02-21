class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums[0];
        return nums[findelement(nums, 0, nums.size()-1)];
    }
    
    int findelement(vector<int> nums, int s, int e){
        int mid = s + ((e - s)/2);
        cout<<mid<<endl;
        if(mid == 0){
            if(nums[mid] != nums[mid+1])
                return mid;
        }
        
        if(mid == nums.size()-1){
            if(nums[mid] != nums[mid-1]){
                return mid;
            }
        }
        if((nums[mid + 1] != nums[mid]) && (nums[mid - 1] != nums[mid]))
            return mid;
        else if(!(mid&1) && nums[mid] == nums[mid+1])
            return findelement(nums, mid+1, e);
        else if((mid&1) && nums[mid] == nums[mid-1])
            return findelement(nums, mid+1, e);
        else 
            return findelement(nums, s, mid-1);
    }
};