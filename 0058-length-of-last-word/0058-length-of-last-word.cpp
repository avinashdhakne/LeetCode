class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s[s.size()-1] == ' '){
            s.pop_back();
        }
        
        int count = 0;
        for(int i=s.length()-1; i>=0; i--){
            
            if(s[i]==' ')
                break;
            count++;
        }
        return count;
    }
};