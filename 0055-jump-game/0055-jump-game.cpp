class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int index = n-1;
        
        for(int i=(n-2); i>=0; i--){
            for(int j=i+1; j<=(i+nums[i]); j++){
                if(j==index){ 
                    index = i;
                    break;
                }
            }
        }
        
        if(index!=0)
            return false;
        return true;
    }
};