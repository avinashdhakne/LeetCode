class Solution {
    void bfs(vector<vector<char>> &grid, vector<vector<int>> &visited, int row, int col) {
        queue<pair<int, int>> q;
        q.push({row, col});
        visited[row][col] = 1;

        int m = grid.size();
        int n = grid[0].size();

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if (!((delrow == 1 && delcol == 1) || (delrow == -1 && delcol == -1) ||
                          (delrow == -1 && delcol == 1) || (delrow == 1 && delcol == -1))) {
                        if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                            visited[nrow][ncol] == 0 && grid[nrow][ncol] == '1') {
                            visited[nrow][ncol] = 1;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        int count = 0;

        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (!visited[row][col] && grid[row][col] == '1') {
                    count++;
                    bfs(grid, visited, row, col);
                }
            }
        }
        return count;
    }
};