```
class Solution {
public:
bool canJump(vector<int>& nums) {
return isjump(nums, 0);
}
bool isjump(vector<int> nums, int index){
if((nums.size()-1) <= index){
return true;
}
for(int i=index+1; i<=(index+nums[index]); i++){
// cout<<i<<" "<<index<<" "<<" in"<<endl;
if(isjump(nums, i))
return true;
// cout<<i<<" "<<index<<" "<<" out"<<endl;
}
// cout<<index;
return false;
}
};
```