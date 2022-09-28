class Solution {
public:
    int concatenatedBinary(int n) {
        long result = 0;
        int i=1;
        long MOD = pow(10,9)+7;
        while(i<=n){
            int digits = 1+ log2(i);
            result = ((result << digits) + i) % MOD;
            i++;
        }
        return result;
    }
};