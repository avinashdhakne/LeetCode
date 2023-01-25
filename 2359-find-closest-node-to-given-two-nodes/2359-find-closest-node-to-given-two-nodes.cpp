class Solution {
public:
    int closestMeetingNode(vector<int> &edges, int node1, int node2) {
        vector<int> d1(edges.size());
        vector<int> d2(edges.size());

        // Find the distance of every reachable node from the target node
        d1 = findMinDist(edges, d1, node1);
        d2 = findMinDist(edges, d2, node2);

        int mini = INT_MAX;
        int minedge = -1;

        // find minimized maximum distance between node1 and node2 using distance vector
        for (int i = 0; i < d1.size(); i++) {
            int maxdist = max(d1[i], d2[i]);
            int mindist = min(d1[i], d2[i]);
            if (mindist != 0 && maxdist < mini) {
                mini = maxdist;
                minedge = i;
            }
        }
        return minedge;
    }

    // vector to find distance from target node to every reachable node
    vector<int> findMinDist(vector<int> edges, vector<int> d, int node) {
        queue<int> q;
        vector<int> v(edges.size());
        
        q.push(node);
        d[node] = 1;
        int dist = 0;
        
        while (!q.empty()) {
            int next = q.front();
            q.pop();
            
            if (v[next] == 1)
                continue;
            if (v[next] == 0) {
                d[next] = ++dist;
                if (edges[next] != -1)
                    q.push(edges[next]);
            }
            v[next] = 1;
        }
        return d;
    }
};