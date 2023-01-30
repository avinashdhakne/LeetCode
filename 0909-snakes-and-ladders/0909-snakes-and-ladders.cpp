class Solution {
public:
  
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<vector<int>> v(n,vector<int> (n));
        
        queue<int> q;
        q.push(1);
        v[n-1][0] = 1;
        int count = 0;
        while(!q.empty()){
            int size = q.size();
            
            
            
            for(int j=0; j<size; j++){
                int pos = q.front();
                q.pop();
                cout<<pos<<" ";
                if(pos == pow(n,2)) return count;
                
                int minpos = minimum(pos+6, pow(n,2));
                for(int i = pos+1; i <= minpos; i++){
                    pair<int,int> cord = convertPos(board, i);
                    int row = cord.first;
                    int col = cord.second;
                    
                    if((board[row][col] != -1) && v[row][col] == 0)
                        q.push(board[row][col]);
                    else if(v[row][col] == 0)
                        q.push(i);
                    v[row][col] = 1;
                }
            }
            cout<<endl;
            count++;
        }
        
        return -1;
    }
    
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
    
    int minimum(int a, int b){
        if(a>b) return b;
        return a;
    }
};
