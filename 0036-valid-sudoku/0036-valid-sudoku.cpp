class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> vect;
        string str1, str2, str3;
        for(int row = 0; row<board.size(); row++){
            for(int col=0; col<board[0].size(); col++){
                
                if(board[row][col] != '.'){
                    
                    str1 = "row " + to_string(row) + " " + to_string(board[row][col]);
                    str2 = "col " + to_string(col) + " " + to_string(board[row][col]);
                    str3 = "box " + to_string((row/3)*3 + col/3) + " " + to_string(board[row][col]);

                    if(vect.find(str1) != vect.end())
                        return false;

                    else if(vect.find(str2) != vect.end())
                        return false;

                    else if(vect.find(str3) != vect.end())
                        return false;

                    vect.insert(str1);
                    vect.insert(str2);
                    vect.insert(str3);
                    
                }
            }
        }
        return true;
    }
};