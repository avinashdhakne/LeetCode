class Solution {
public:
    int evenSum(vector<int> vect){
        int sum = 0;
        for(int &i: vect){
            if(i%2==0) {
                sum += i;
            }
        }
        return sum;
    }
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> result;
        int sum = evenSum(nums);
        
        for(int i=0; i<queries.size(); i++){
            if(nums[queries[i][1]]%2==0) {
                sum = sum - nums[queries[i][1]];
            }
            nums[queries[i][1]] = nums[queries[i][1]] + queries[i][0];
            if(nums[queries[i][1]]%2==0) {
                sum += nums[queries[i][1]];
            }
            result.push_back(sum);
        }
        return result;
    }
};