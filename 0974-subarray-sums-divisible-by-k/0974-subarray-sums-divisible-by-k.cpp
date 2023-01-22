class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector <int> pSum(nums.size());
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            pSum[i] = sum;
        }
        
        unordered_map<int,int> rem;
        rem[0] = 1;
        
        int count = 0;
        for(auto i: pSum){
            int remainder = i % k;
            
            if(remainder<0){
                remainder += k;
            }
            if(rem.find(remainder) == rem.end()){
                rem[remainder] = 1;
            }
            else{
                count += rem[remainder];
                rem[remainder]++;
            }
        }
        return count;
    }
};