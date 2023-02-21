class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() <= 1){
            return nums[0];
        }
        int s = 0;
        int e = nums.size()-1;
        while(s <= e){
            int mid = s + ((e - s)/2);
            // cout<<mid<<endl;
            if(mid == 0){
                if(nums[mid] != nums[mid+1])
                    return nums[mid];
            }

            if(mid == nums.size()-1){
                if(nums[mid] != nums[mid-1]){
                    return nums[mid];
                }
            }
            if((nums[mid + 1] != nums[mid]) && (nums[mid - 1] != nums[mid]))
                return nums[mid];
            else if(!(mid&1) && nums[mid] == nums[mid+1])
                s = mid + 1;
            else if((mid&1) && nums[mid] == nums[mid-1])
                s = mid + 1;
            else 
                e = mid - 1;
        }
        return -1;
    }
};