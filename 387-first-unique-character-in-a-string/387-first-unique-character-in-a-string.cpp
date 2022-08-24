class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vect(26,0);
        for(char i: s){
            vect[i-'a'] ++;
        }
        
        for(int i=0; i<s.length();i++){
            if(vect[(int)s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};