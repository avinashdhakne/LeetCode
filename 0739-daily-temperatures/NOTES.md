```
class Solution {
public:
vector<int> dailyTemperatures(vector<int>& temp) {
stack<pair<int,int>> st;
vector<int> result(temp.size());
for(int i=temp.size()-1; i>=0; i--){
int ans = 0;
while(!st.empty() && st.top().first <= temp[i]){
ans += st.top().second;
st.pop();
}
if(!st.empty()) ans++;
else ans = 0;
st.push({temp[i],ans});
result[i] = ans;
}
return result;
}
};
```