class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() - 1;
        int layers = n/2;
        int temp;
        
        for(int layer = 0; layer<=layers; layer++){
            int start = layer;
            int end = n-layer;
            
            for(int i=start; i<end; i++){
                temp = matrix[start][i];
                matrix[start][i]   = matrix[n-i][start];
                matrix[n-i][start]     = matrix[end][n-i];
                matrix[end][n-i]   = matrix[i][end];
                matrix[i][end] = temp;
            }
        }
    }
};