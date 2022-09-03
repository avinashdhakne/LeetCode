class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> vect;
        int result = 0;
        for(char &i: s) vect[i]++;
        
        bool isOdd = 0;
        for(auto itr = vect.begin(); itr!=vect.end();itr++){
            if(itr->second > 1){
                result += itr->second - (itr->second % 2);
            }
            if(itr->second % 2 == 1){
                isOdd = 1;
            }
        }
        
        if(isOdd){
                result++;
        }
        
        return result;
    }
};

