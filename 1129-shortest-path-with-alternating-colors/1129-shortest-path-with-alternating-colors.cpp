class Solution {
public:
    void print(vector<vector<int>> v){
        for(auto i: v){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    void createAdj(vector<vector<int>>& Edges, vector<vector<int>>& adj){
        for(auto edge: Edges){
            int row = edge[0];
            int col = edge[1];
            adj[row][col] = 1;
        }
    }
    
    void pushForSource(queue<pair<int,char>> &q, vector<vector<int>> &edges, char flag, int source, bool &temp){
        for(int i=0; i<edges.size(); i++){
            if(edges[source][i] == 1){
                q.push({i,flag});
                edges[source][i] = 0;
                temp = true;
            }
        }
    }
    
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<int>> redAdj(n, vector<int>(n));
        vector<vector<int>> blueAdj(n, vector<int>(n));
        vector<int> result(n, INT_MAX);
        int distance = 0;
        bool flag = false;
        // vector<int> visited(n);
        
        createAdj(redEdges, redAdj);
        createAdj(blueEdges, blueAdj);
        
        queue<pair<int,char>> st;
        
        result[0] = 0;
        pushForSource(st, redAdj, 'r', 0, flag);
        pushForSource(st, blueAdj, 'b', 0, flag);
        result[0] = distance++;
        flag = false;
        
        // visited[0] = 1;
        
        while(!st.empty())
        {
            int qSize = st.size();
            
            while(qSize--)
            {
                auto curr = st.front();
                st.pop();
                // distance--;

                if(curr.second == 'r'){
                    pushForSource(st, blueAdj, 'b', curr.first, flag);
                    // distance++;
                }
                if (curr.second == 'b'){
                    pushForSource(st, redAdj, 'r', curr.first, flag);
                    // distance++;
                }
                result[curr.first] = min(result[curr.first], distance);
            }  
            distance++;
        }
        
        for(int i=0; i<n; i++){
            if(result[i] == INT_MAX)
                result[i] = -1;
        }
    
        return result;
    }
};