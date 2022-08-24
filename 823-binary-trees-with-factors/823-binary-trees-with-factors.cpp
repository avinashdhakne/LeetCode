class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        long int count = 0;
        map<int, long int> countMap;
        sort(arr.begin(), arr.end());
        const long long int MOD = pow(10,9) + 7;
        
        for(int k = 0; k<arr.size(); k++){
            countMap.insert({arr[k],1});
        }
        
        for(int i=1; i<arr.size(); i++){
            auto iter3 = countMap.find(arr[i]);
            count = 0;
                
            for(int j=0; j<i; j++) {
                if(arr[i]%arr[j]==0) {
                    
                    auto iter1 = countMap.find(arr[i]/arr[j]);
                    auto iter2 = countMap.find(arr[j]);
                    
                    if(iter1 != countMap.end()){
                        count+=(*iter1).second * (*iter2).second;
                    }
                }
            }
            (*iter3).second += count;
        }
        
        long long int result=0;
        for(auto &iter4: countMap){
            cout<<iter4.second;
            result += iter4.second;
        }
        
        return result % MOD;
        
    }
};