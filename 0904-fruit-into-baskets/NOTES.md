```
class Solution {
public:
int totalFruit(vector<int>& fruits) {
int result = 0;
for(int i=0; i<fruits.size(); i++){
unordered_map <int,int> mp;
​
for(int j=i; j<fruits.size(); j++){
if(mp.size() < 2){
mp[fruits[j]];
}
if(mp.find(fruits[j]) == mp.end())
break;
else
mp[fruits[j]]++;
}
int sum = 0;
for(auto i: mp){
sum += i.second;
}
result = max(result, sum);
​
}
return result;
}
};
```