class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> str(numRows);
        
        for(int i = 0; i < s.length(); i++ ){
            int pos = (i % (numRows + (numRows - 2))) + 1;
            int temp = (pos/numRows == 0)?pos % numRows: numRows - (pos % numRows);
            str[temp-1].push_back(s[i]);
        }
        
        string result = "";
        for(auto i: str){
            result+= i;
        }
        
        return result;;
    }
};