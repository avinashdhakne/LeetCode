class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int index = n-1;
        for(int i=(n-1); i>=0; i--){
            if(index <= nums[i]+i)
                index = i;
        }
        
        if(index!=0)
            return false;
        return true;
    }
};