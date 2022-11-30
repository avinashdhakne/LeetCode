class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        
       for(auto i: arr){
           umap[i]+=1;
        } 
        
        unordered_set<int> uset;
        for(auto i: umap){
            if(uset.find(i.second) == uset.end()){
                uset.insert(i.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};