class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(auto subarray: accounts){
            int sum = 0;
            for(int i: subarray){
                sum+=i;
            }
            if(sum>max){
                max = sum;
            }
        }
        return max;
    }
};