class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        
        if(str1 + str2 != str2 + str1)
            return "";
        return str2.substr(0,gcd(n,m));
    }
};