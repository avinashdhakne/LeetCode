class Solution {
public:
    int fib(int n) {
        
        int current, prev2 = 0, prev1 = 1;
        
        if(n==0){
            return prev2;
        }
        
        for(int i=2; i<=n; i++){
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
        
    }
};