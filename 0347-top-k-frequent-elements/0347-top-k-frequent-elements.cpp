class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> vect;
        for(int i: nums){
            vect[i]++;
        }
        
        vector<pair<int,int>> count;
        for(auto i: vect){
            count.push_back({i.second, i.first});
        }
        
        sort(count.rbegin(), count.rend());
        
        
        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(count[i].second);
        }
        
        return result;
    }
};