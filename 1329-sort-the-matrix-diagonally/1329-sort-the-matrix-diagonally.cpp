class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i=0; i<m; i++){
            swap(mat,i,0);
        }
        
        for(int j=1; j<n; j++){
            swap(mat, 0,j);
        }
        
        return mat;
    }
    
    
    void swap(vector<vector<int>> &mat, int row, int col){
        int m = mat.size();
        int n = mat[0].size();
        map<int,int>map;
        
        int i = row;
        int j = col;
        
        while(i<m && j<n){
            map[mat[i][j]]++;
            j++;
            i++;
        }
        
        // auto itr = map.begin();
        i = row;
        j = col;
        
//         for(auto &m: map){
//             cout<<m.first<<" "<<m.second<<endl;
//         }
//         cout<<endl;

        // while(i<m && j<n){
        //     if((*itr).second > 0){
        //         mat[i][j] = (*itr).first;
        //         (*itr).second--;
        //     }
        //     itr++;
        //     j++;
        //     i++;
        // }
        
        for (auto itr = map.begin(); itr != map.end(); itr++)
        {   
            while ((*itr).second > 0)
            {
                mat[i][j] = (*itr).first;
                (*itr).second--;
                i++;
                j++;
            }
        }
    }   
    
};