class Solution {
public:
    string breakPalindrome(string str) {
        int length = str.length();
        if(length == 1) return "";
        
        for(int i=0; i<length/2; i++){
            if(str[i] != 'a'){
                str[i] = 'a';
                return str;
            }
        }
        
        str[length-1] = 'b';
        return str;
    }
};