class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long result = 0;
        vector<vector<int>> adj(roads.size()+1);
        vector<int> v(roads.size()+1);
        for(auto path: roads){
            adj[path[0]].push_back(path[1]);
            adj[path[1]].push_back(path[0]);
        }
        
        DFS(adj, v, seats, result, 0);
        return result;
    }
    
    long long DFS(vector<vector<int>> &adj, vector<int> &v, int seats, long long &result, int node){
        v[node] = 1;
        long long count = 1;
        for(auto i: adj[node]){
            if(!v[i])
                count += (DFS(adj, v, seats, result, i));
        }
        
        long long cars = count/seats;
        if(count%seats) cars++;
        
        if(node != 0) result+=cars;
        return count; 
    }
};