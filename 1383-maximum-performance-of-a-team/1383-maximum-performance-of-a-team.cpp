class Solution {
public:
    int M=1e9+7;
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({eff[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>> pq;
        
        long long ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            int mine=v[i].first,sp=v[i].second;
            sum+=sp;
            pq.push(sp);
            
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            
            long long cur=sum*mine;
            ans=max(ans,cur);
        }
        return ans%M;
    }
};