class Solution {
public:
    int find(int n, vector<int> &vect){
        if(vect[n]){
            return vect[n];
        }
        vect[n] = ((10 - (n-1)) * find(n-1, vect));
        return vect[n];
    }
    
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        vector<int> vect(n+3);
        vect[0] = 1;
        vect[1] = 9;
        vect[2] = 81;
        
        find(n, vect);
    
        return accumulate(vect.begin(), vect.begin()+n+1, 0);
    }
};