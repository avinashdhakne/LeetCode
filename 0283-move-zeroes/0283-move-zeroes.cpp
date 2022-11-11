class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 ; //for non zeros
        int j = 0 ; // for zeros
        
        while( i<nums.size() && j<nums.size() )
        {
            while( j<nums.size() && nums[j] != 0 ) j++;
            i = j ; 
            
            while ( i<nums.size() && nums[i] == 0 ) i++;
            if( i<nums.size() && j<nums.size()) swap(nums[i], nums[j]);
        }
    }
};