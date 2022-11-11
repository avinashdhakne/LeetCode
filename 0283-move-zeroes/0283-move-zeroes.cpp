class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 ; //for non zeros
        int j = 0 ; // for zeros
        int n = nums.size();
        
        while( i<n && j<n )
        {
            while( j<n && nums[j] != 0 ) j++;
            i = j ; 
            
            while ( i<n && nums[i] == 0 ) i++;
            if( i<n && j<n) swap(nums[i], nums[j]);
        }
    }
};