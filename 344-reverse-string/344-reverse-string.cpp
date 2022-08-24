class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size() - 1;
        int m = 0;
        
        char temp;
        
        while(m<=n){
            
           temp = s[n];
            s[n] = s[m];
            s[m] = temp;
            
            n--;
            m++;
        }
        
    }
};