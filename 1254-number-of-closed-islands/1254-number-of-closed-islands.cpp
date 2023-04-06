class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int colLen = grid.size(); 
        int rowLen = grid[0].size();
        
        int lastRow = colLen - 1; 
        int lastCol = rowLen - 1;
        
        queue<pair<int,int>> cornerq;
        queue<pair<int,int>> islandq;
        vector<vector<int>> visited(colLen, vector<int>(rowLen));
        
        cout<<lastRow<<" "<<lastCol<<endl;
        vector<int> edgerow = {0,lastRow};
        vector<int> edgecol = {0,lastCol};
        
        vector<pair<int,int>> neighbours = 
        {{1,0},{0,1},{-1,0},{0,-1}};
        
        for(int i=0; i<rowLen; i++){
            for(auto j: edgerow){
                int row = j;
                int col = i;
                if(grid[row][col] == 0){
                    cout<<row<<" "<<col<<" | ";
                    cornerq.push({j,i});
                }
            }
        }
    
        cout<<endl;
        
        for(int i=1; i<colLen-1; i++){
            for(auto j: edgecol){
                int row = i;
                int col = j;
                if(grid[row][col] == 0){
                    cout<<row<<" "<<col<<" | ";
                    cornerq.push({i,j});
                }
            }
        }
                
        while(!cornerq.empty()){
            pair<int,int> curr = cornerq.front();
            cornerq.pop();
            visited[curr.first][curr.second] = 1;
            for(auto i: neighbours){
                int row = curr.first + i.first;
                int col = curr.second + i.second;
                if((row >=0 && row < colLen) && (col >=0 && col < rowLen)){
                    if(visited[row][col] == 0 && grid[row][col] == 0){
                        cornerq.push({row,col});
                    }
                }
            }
        }
        
        int count = 0;
        for(int row=0; row<colLen; row++){
            for(int col=0; col<rowLen; col++){
                if(grid[row][col] == 0 && visited[row][col] == 0){
                    
                    islandq.push({row,col});
                    
                    while(!islandq.empty()){
                        pair<int,int> curr = islandq.front();
                        islandq.pop();
                        visited[curr.first][curr.second] = 1;
                        for(auto i: neighbours){
                            int row = curr.first + i.first;
                            int col = curr.second + i.second;
                            if((row >=0 && row < colLen) && (col >=0 && col < rowLen)){
                                if(visited[row][col] == 0 && grid[row][col] == 0){
                                    islandq.push({row,col});
                                }
                            }
                        }
                    }
                    
                    count++;
                }
            }
        }
        
        return count;
    }
};