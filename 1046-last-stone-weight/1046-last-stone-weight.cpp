class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(stones.begin(), stones.end());
        int remains = q.top();
        
        
        while(q.size() > 1){
            int large = q.top();
            q.pop();
            int small = q.top();
            q.pop();
            
            if(large != small){
                remains = large - small;
                q.push(remains);
            }
        }
        
        if(q.empty())
            return 0;
        return q.top();
    }
};