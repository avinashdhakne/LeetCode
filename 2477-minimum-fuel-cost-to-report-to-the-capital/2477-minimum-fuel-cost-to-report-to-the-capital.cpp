class Solution {
public:
    long long ans;
    long long solve(vector<vector<int>> &adj,vector<int> &vis,int node,int seats){

        vis[node]=1;
       long long cnt=1; // store no of people at each node
        for(auto it :adj[node]){
            if(!vis[it]){
                cnt+=solve(adj,vis,it,seats);
            }
        }
        long long x = cnt/seats;  //  no of cars = total people / no of seats
        if(cnt%seats){  // no of people are more than the seats
            x++;
        }
        if(node!=0){ // not a goal state then add total no cars to the ans
            ans+=x; 
        }
          return cnt; //return no of people at particular node
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size();
        if(n==0){
            return 0;
        }
        ans=0;
        vector<vector<int>> adj(n+1);  //store in adj matrix 
        for(int i=0;i<n;i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        vector<int> vis(n+1,0);   //to check the node is visited or not
        solve(adj,vis,0,seats);
        return ans;
    }
};