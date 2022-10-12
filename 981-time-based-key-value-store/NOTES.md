```
class TimeMap
{
unordered_map<string, vector<pair<int, string>>> map;
​
public:
​
TimeMap()
{
}
​
void set(string key, string value, int timestamp)
{
auto iter = map.find(key);
if (iter != map.end())
{
map[key].push_back({timestamp, value});
}
else
{
map.insert({key, {{timestamp, value}}});
}
}
​
string get(string key, int timestamp)
{
string answer = "";
for(int i=0; i < map[key].size(); i++){
if(map[key][i].first <= timestamp)
answer = map[key][i].second;
}
return answer;
}
};
```
​
/**
* Your TimeMap object will be instantiated and called as such:
* TimeMap* obj = new TimeMap();
* obj->set(key,value,timestamp);
* string param_2 = obj->get(key,timestamp);
*/