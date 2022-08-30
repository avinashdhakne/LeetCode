```
class Solution {
public:
void rotate(vector<vector<int>>& matrix) {
int n = matrix.size();
​
for(int row = 0; row < n; row++){
for(int col = 0; col < row ; col++){
swap(matrix[row][col],matrix[col][row]);
}
}
for(int row=0; row<n; row++){
int left = 0, right = n-1;
while(left<right){
swap(matrix[row][left],matrix[row][right]);
left++; right--;
}
}
}
};
```