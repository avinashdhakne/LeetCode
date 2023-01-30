class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> mat(n+1);
        for(int i=0; i<trust.size(); i++){
            mat[trust[i][0]].first++;
            mat[trust[i][1]].second++;
        }
        
        for(int i=1; i<mat.size(); i++){
            if(mat[i].first==0 && mat[i].second==(n-1))
                return i;
        }
        
        return -1;
    }
};