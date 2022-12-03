class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        vector<int> vect(n+1);
        vect[1] = 1;
        vect[2] = 2;
        
        for(int i=3; i<=n; i++){
            vect[i] = vect[i-1] + vect[i-2];
        }
        
        return vect[n];
    }
};