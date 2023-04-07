class Solution {
public:
    
    void dfs(vector<vector<int>> &grid, int row, int col, vector<vector<int>> &visited){
        stack<pair<int,int>> st;
        vector<pair<int,int>> neighbour = {{0,1},{1,0},{-1,0},{0,-1}};
        st.push({row,col});
        visited[row][col] = 1;
        
        while(!st.empty()){
            pair<int,int> curr = st.top();
            st.pop();
            for(auto i: neighbour){
                int row1 = curr.first + i.first;
                int col1 = curr.second + i.second;
                if((row1>=0 && row1<grid.size())&&(col1>=0 && col1<grid[0].size())){
                    if(!visited[row1][col1] && grid[row1][col1]){
                        dfs(grid, row1, col1, visited);
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
        vector<vector<int>> visited (n,vector<int>(m));
        
        for(int i=0; i<m; i++){
            for(auto j: edgeRows){
                if(grid[j][i] && !visited[j][i]){
                    dfs(grid,j,i,visited);
                }
            }    
        }
        
        for(int i=0; i<n; i++){
            for(auto j: edgeCols){
                if(grid[i][j] && !visited[i][j]){
                    dfs(grid,i,j,visited);
                }
            }
        }
        
        int result = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                cout<<visited[i][j]<<" ";
                if(!visited[i][j] && grid[i][j]){
                    result++;
                }
            }
            cout<<endl;
        }
        return result;
    }
};