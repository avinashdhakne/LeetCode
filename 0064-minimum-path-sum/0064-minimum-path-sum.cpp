class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        for(int i=1; i<cols; i++){
            grid[0][i] += grid[0][i-1];
        }
        
        for(int i=1; i<rows; i++){
            grid[i][0] += grid[i-1][0];
        }
        
        for(int i=1; i<rows; i++){
            for(int j=1; j<cols; j++){
                int left = grid[i][j] + grid[i][j-1];
                int right = grid[i][j] + grid[i-1][j];
                grid[i][j] = min(left, right);
            }
            cout<<endl;
        }
        
        return grid[rows-1][cols-1];  
    }
};