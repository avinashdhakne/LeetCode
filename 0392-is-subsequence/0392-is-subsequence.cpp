class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        for(char i: t){
            if(i==s[j]){
                j++;
            }
        }
        if(j==s.length()){
            return true;
        }
        return false;
    }
};