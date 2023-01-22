```
class Solution {
public:
int findWindowSum(vector<int> vect, int start, int end){
int sum = 0;
for(int i=start; i<end; i++){
sum += vect[i];
}
return sum;
}
int maxSubarraySumCircular(vector<int>& nums) {
int n = nums.size();
for(int i=0; i<n; i++){
nums.push_back(nums[i]);
}
int maxsum = INT_MIN;
for(int wsize = n; wsize > 0; wsize--){
for(int i=0; i<n; i++){
int start = i;
int end = i+wsize;
if(end < nums.size()){
int sum = findWindowSum(nums,start,end);
if(sum > maxsum){
maxsum = sum;