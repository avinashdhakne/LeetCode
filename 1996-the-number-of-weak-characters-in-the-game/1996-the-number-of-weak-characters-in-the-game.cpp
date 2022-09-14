class Solution {
public:
    bool static sorted(vector<int> &a, vector<int> &b){
        if(a[0] == b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        sort(prop.begin(), prop.end(), sorted);
        int maxdiff = INT_MIN;
        int result = 0;
        for(int i=prop.size()-1; i>=0; i--){
            if(prop[i][1]>maxdiff)
                maxdiff = prop[i][1];
            if(prop[i][1]<maxdiff)
                result++;
        }
        return result;
    }
};