class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int diff = INT_MAX;
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int first = i + 1;
            int end = nums.size() - 1;
            
            while (first < end)
            {
                if (target == nums[first] + nums[end] + nums[i])
                {
                    return target;
                }
                else if(diff > abs(nums[first]+nums[end]+nums[i]-target))
                {
                    diff = abs(nums[first] + nums[end] + nums[i]-target);
                    ans = nums[first] + nums[end] + nums[i];
                }
                
                if(nums[first] + nums[end] + nums[i] > target) end--;
                else first++;
                
            }
        }
        return ans;
    }
};