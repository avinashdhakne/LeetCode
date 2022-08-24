class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=30; i>=0; i -= 2) {
            if((n ^ (1<<i)) == 0) 
                return true;  
        }
        return false;        
    }
};