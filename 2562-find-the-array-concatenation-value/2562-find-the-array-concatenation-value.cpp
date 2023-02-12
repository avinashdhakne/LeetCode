class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int n= nums.size();
        
        int start = 0;
        int end = n-1;
        
       while(start <= end){
           if(start == end)
               sum += nums[start];
           else{
                int temp = nums[end];
                int divisor = 10;
                while((temp / divisor) > 0){
                    divisor *= 10;
                }
                long long cNum = nums[start]*divisor + nums[end];
                sum += cNum; 
           }
           start++; end--;
       }
        return sum;
    }
};