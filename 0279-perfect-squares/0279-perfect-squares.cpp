class Solution {
public:
    int pattern(int n, vector<int> &dp){
        if(n<=0){
            return 0;
        }
        
        if(dp[n-1] != -1){
            return dp[n-1];
        }
        int minimum = n;
        for(int i=1; pow(i,2)<=n; i++){
            minimum = min(pattern(n-i*i, dp),minimum);
        }
        dp[n-1] = minimum+1;
        return minimum+1;
    }
    
    int numSquares(int n) {
        vector<int> vect(n,-1);
        return pattern(n,vect);;
    }
};