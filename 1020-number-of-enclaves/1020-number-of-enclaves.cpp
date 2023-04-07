class Solution {
public:
    
    void dfs(vector<vector<int>> &grid, int row, int col){
        stack<pair<int,int>> st;
        vector<pair<int,int>> neighbour = {{0,1},{1,0},{-1,0},{0,-1}};
        st.push({row,col});
        grid[row][col] = 0;
        
        while(!st.empty()){
            pair<int,int> curr = st.top();
            st.pop();
            for(auto i: neighbour){
                int row1 = curr.first + i.first;
                int col1 = curr.second + i.second;
                if((row1>=0 && row1<grid.size())&&(col1>=0 && col1<grid[0].size())){
                    if(grid[row1][col1]){
                        dfs(grid, row1, col1);
                    }
                }
            }
        }
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int lastRow = n - 1;
        int lastCol = m - 1;
        
        vector<int> edgeCols = {0,lastCol};
        vector<int> edgeRows = {0,lastRow};
        
        for(int i=0; i<m; i++){
            for(auto j: edgeRows){
                if(grid[j][i]){
                    dfs(grid,j,i);
                }
            }    
        }
        
        for(int i=0; i<n; i++){
            for(auto j: edgeCols){
                if(grid[i][j]){
                    dfs(grid,i,j);
                }
            }
        }
        
        int result = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                if(grid[i][j]){
                    result++;
                }
            }
        }
        return result;
    }
};