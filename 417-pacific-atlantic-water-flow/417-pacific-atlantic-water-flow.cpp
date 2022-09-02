class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> result;
        int m = heights.size();
        int n = heights[0].size();
        
        vector<vector<int>> pacific(m, vector<int>(n,0));
        vector<vector<int>> atlantic(m, vector<int>(n,0));
        
        for(int i=0; i<m; i++){
            visit(heights, pacific, i , 0,INT_MIN);
            visit(heights, atlantic, i , n-1,INT_MIN);
        }
        
        for(int j=0; j<n; j++){
            visit(heights, pacific, 0, j,INT_MIN);
            visit(heights, atlantic, m-1, j,INT_MIN);
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pacific[i][j] == 1 && atlantic[i][j] == 1){
                    vector<int>temp(2);
                    temp[0] = i;
                    temp[1] = j;
                    result.push_back(temp);
                }
            }
        }
        return result;

    }
    
    void visit(vector<vector<int>> &matrix, vector<vector<int>> &ocean, int row, int col, int prev){
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(row<0 || row>=m || col<0 || col>=n)
            return;
        
        if(ocean[row][col] == 1)
            return;
        
        if(matrix[row][col]<prev)
            return;
        
        ocean[row][col] = 1;
        
        visit(matrix, ocean, row + 1, col,matrix[row][col]);
        visit(matrix, ocean, row - 1, col,matrix[row][col]);
        visit(matrix, ocean, row, col + 1,matrix[row][col]);
        visit(matrix, ocean, row, col - 1,matrix[row][col]);
 
    }
};