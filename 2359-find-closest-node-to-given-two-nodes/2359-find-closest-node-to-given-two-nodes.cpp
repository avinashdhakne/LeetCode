class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int> d1(edges.size());
        vector<int> d2(edges.size());

        findMinDist(edges, d1, node1);
        findMinDist(edges, d2, node2);
        
        int min = INT_MAX;
        int minedge = -1;
        for(int i=0; i<d1.size(); i++){
            int maxdist = maximum(d1[i], d2[i]);
            int mindist = minimum(d1[i], d2[i]);
            if(mindist!=0 && maxdist<min){
                min=maxdist;
                minedge = i;
            }
        }
        
//         for(auto i: d1)
//             cout<<i<<" ";
//         cout<<endl;
        
//         for(auto i: d2)
//             cout<<i<<" ";
//         cout<<endl;
        
        if(minedge == -1)
            return minedge;
        
        return minedge;
    }
    
    void findMinDist(vector<int> edges, vector<int> &d, int node){
        queue<int> q;
        vector<int> v(edges.size());
        q.push(node);
        d[node] = 1;
        int dist = 0;
        while(!q.empty()){
            int next = q.front();
            q.pop();
            
            // cout<<next<<" "<<dist<<endl;
            // for(auto i: v)
            //     cout<<i<<" ";
            // cout<<"\n"<<endl;
            if(v[next] == 1) continue;
            
            if(v[next] == 0){
                d[next] = ++dist;
                if(edges[next]!=-1)
                    q.push(edges[next]);
            }
                
            v[next] = 1;
        }
    }
    
    int minimum(int a, int b){
        if(a<b) return a;
        return b;
    }
    
    int maximum(int a, int b){
        if(a>b) return a;
        return b;
    }
};