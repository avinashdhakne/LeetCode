if(board[row][col] < pos && board[row][col] != -1){
int position = board[row][col];
board[row][col] = -1;
simulate(board, count+1, position, result);
}
}
if(board[row1][col1] == -1)
simulate(board, count+1, minimum(curr+6, pow(board.size(),2)), result);
}
int minimum(int a, int b){
if(a>b) return b;
return a;
}
​
pair <int, int> convertPos(vector<vector<int>> board, int pos){
int n = board.size();
pos = pow(n,2) - pos;
int col, row = (pos/ (n));
if(((n-1) - row) % 2 == 1)
col = pos - row * n;
else
col = (n-1) - (pos - (row * n));
return {row,col};
}
};
```