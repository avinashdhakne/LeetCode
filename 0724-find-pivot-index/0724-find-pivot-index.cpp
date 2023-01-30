class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int leftsum = 0, rightsum = 0;
        int n = nums.size();
		
        for (int i = 0; i < n; i++) 
            rightsum += nums[i];
        
        for (int j = 0; j < n; j++) {
            rightsum -= nums[j];
            if (leftsum == rightsum)   return j;
            leftsum += nums[j];
        }
        return -1;
    }
};