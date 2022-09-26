class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int result = INT_MAX;
        for(int i=0; i<strs.size()-1; i++){
            int j;
            for(j = 0; j<strs[0].size(); j++){
                if(strs[i][j] != strs[i+1][j])
                    break;
            }
                        
            if(result > j){
                result = j;
            }
        }
        
        return strs[0].substr(0,result);
    }
};