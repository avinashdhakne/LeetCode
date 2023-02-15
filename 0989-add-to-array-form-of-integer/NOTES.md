```
class Solution {
public:
vector<int> addToArrayForm(vector<int>& num, int k) {
int n = num.size();
long long number = 0;
for(int i=n-1; i>=0; i--){
number += num[i] * pow(10, n-i-1);
}
long long result = number + k;
vector<int> ans;
while(result != 0){
ans.push_back(result % 10);
result /= 10;
}
reverse(ans.begin(), ans.end());
return ans;
}
};
```