class Solution {
public:
    bool isPowerOfThree(int n) {
       int N = pow(3,(int)(log(pow(2,31)-1)/log(3)));
       if(n > 0 && N%n==0)
           return true;
        
        return false;
    }
};