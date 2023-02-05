class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int strlen = order.length();
        vector<int> index(strlen);
        
        for(int i=0; i<strlen; i++){
            index[order[i] - 'a'] = i;
        }
        
        for(int i=1; i<words.size(); i++){
            int n = min(words[i-1].length(), words[i].length());
            
            for(int j=0; j<n; j++){
    
                if(j > n)
                    break;
                if(index[words[i-1][j] - 'a'] > index[words[i][j] - 'a'])
                    return false;
                if(index[words[i-1][j] - 'a'] < index[words[i][j] - 'a']){
                    break;
                }   
                if(j+1 == n && words[i].length() < words[i-1].length()){
                    cout<<"hi";
                    return false;
                }
                    
            }
        }
        return true;
    }
};