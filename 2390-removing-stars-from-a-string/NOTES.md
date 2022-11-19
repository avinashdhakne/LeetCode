```
class Solution {
public:
string removeStars(string s) {
string result;
for(char i: s){
if(!result.empty() && i=='*'){
result.pop_back();
}
else{
result.push_back(i);
}
}
return result;
}
};
```