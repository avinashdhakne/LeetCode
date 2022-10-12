```
class Solution {
public:
int largestPerimeter(vector<int>& nums) {
sort(nums.begin(), nums.end(), greater<int>());
for(int i=0; i<nums.size()-2; i++){
double s = 0;
for(int j = i; j<i+3; j++)
s += nums[j];
s = s/2;
cout<<s<<" "<<nums[i]<<" "<<nums[i+1]<<" "<<nums[i+2]<<" "<<endl;
if((s-nums[i])&&(s-nums[i+1])&&(s-nums[i+2]))
return nums[i]+nums[i+1]+nums[i+2];
}
return 0;
}
};
```