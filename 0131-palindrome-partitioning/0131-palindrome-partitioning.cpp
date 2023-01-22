class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> output;
        vector<string> str;
        getpartition(output, s, str, 0);
        return output;
    }
    
    void getpartition( vector<vector<string>> &output, string s, vector<string> &str, int index){
        if(index == s.length()){
            output.push_back(str);
            return;
        }
        
        for(int i=index; i<s.length(); i++){
            if(ispalindrome(s, index, i)){
                string temp = s.substr(index, (i-index)+1);
                str.push_back(temp);
                getpartition(output, s, str, i+1);
                str.pop_back();
            }
        }
    }
    
    bool ispalindrome(string str, int s, int e){
        if(s>e) return true;
        if(str[s++] == str[e--])
            return ispalindrome(str, s, e);
        return false;
    }
};