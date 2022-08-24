class Solution {
public:

    bool isAlphanumaric(char c) {
        if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z' )||(c >= '0' && c <= '9'))
            return true;
        return false;
    }
    
    char lowercase(char c){
        if((c >= 'a' && c <= 'z')||(c >= 0 && c <= 9)){
            return c;
        }
        char result = c - 'A' + 'a';
        return result;
    }
    
    bool isPalindrome(string s) {
        
        string temp = "";
        
        for(int i=0; i<s.length(); i++){
            if(isAlphanumaric(s[i])){
                temp.push_back(lowercase(s[i]));
            }
               
        }
        
        for(int i=0, j=temp.length()-1; i<j, j>0; i++,j-- ){
            if(temp[i]!=temp[j])
                return false;
        }
        
        return true;
    }
};