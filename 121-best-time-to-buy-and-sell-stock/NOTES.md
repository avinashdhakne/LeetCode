```
class Solution {
public:
int maxProfit(vector<int>& prices) {
int result = 0;
int n = prices.size();
vector<int> max(n,0);
max[n-1] = prices[n-1];
for(int i=prices.size()-2; i>=0; i--){
if(prices[i] > max[i+1]){
max[i] = prices[i];
}
else{
max[i] = max[i+1];
}
}
for(int i=0; i<prices.size(); i++){
if((max[i] - prices[i]) > result){
result = max[i] - prices[i];
}
}
return result;
}
};
```