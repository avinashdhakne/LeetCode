class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> vect;
        int result = 0;
        for(char &i: s) vect[i]++;
    
        for(auto itr = vect.begin(); itr!=vect.end();itr++){
            if(itr->second > 1){
                result += itr->second - (itr->second % 2);
            }
        }
        
        for(auto &iter: vect){
            if(iter.second % 2 == 1){
                result++;
                break;
            }
        }
        
        return result;
    }
};