class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        vector<vector<int>> v(grid.size(), vector<int>(grid.size()));
        int count = -1;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                if(grid[i][j] == 1 && v[i][j]==0){
                    q.push({i,j});
                    v[i][j] = 1;
                }
                    
            }
        }
            
        while(!q.empty()){
            int qSize = q.size();
            while(qSize--){
                auto top = q.front();
                q.pop();
                for(int i=-1; i<=1; i++){
                    int row = top.first + i;
                    int col = top.second + i;
                    if(row>=0 && row<grid.size() && v[row][top.second] == 0){
                        q.push({row,top.second});
                        v[row][top.second] = 1;
                    }
                    if(col>=0 && col<grid.size() && v[top.first][col] == 0){
                        q.push({top.first,col});
                        v[top.first][col] = 1;
                    }
                }
            }
            count++;
        }
            
        return (count == 0)? -1: count;
    }
};