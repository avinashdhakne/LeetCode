class Solution {
public:
    int tribonacci(int n) {
        int prev = 0;
        int curr = 1;
        int next = 1;
        int result;
        for(auto i=3; i<=n; i++){
            result = prev + curr + next;
            prev = curr;
            curr = next;
            next = result;
        }
        
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        return result;
    }
};