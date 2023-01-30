```
class Solution {
public:
bool isZero(vector<int> v){
for(auto i: v){
if(i!=0) return false;
}
return true;
}
bool doesEveryoneRespect(vector<vector<int>> mat, int person){
if(person < 0) return false;
for(int i=0; i<mat.size(); i++){
if(mat[i][person] == 0 && i != person){
return false;
}
}
return true;
}
int findJudge(int n, vector<vector<int>>& trust) {
vector<vector<int>> matrix(n, vector<int> (n));
for(auto i: trust){
int row = i[0] - 1;
int col = i[1] - 1;
matrix[row][col] = 1;
}
int temp = -2;
for(int i=0; i<matrix.size(); i++){
if(isZero(matrix[i])){
temp = i;
}
}
if(doesEveryoneRespect(matrix, temp)){
return temp+1;
}
return -1;
}
};
```