class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<haystack.length(); i++){
            if(haystack[i]==needle[0]){
                if(check(haystack, needle, i))
                    return i;
            }
        }
        return -1;
    }
    
    bool check(string haystack, string needle, int start){
        for(int i=0; i<needle.size(); i++){
            if(haystack[i+start]!=needle[i]){
                return false;
            }
        }
        return true;
    }
};