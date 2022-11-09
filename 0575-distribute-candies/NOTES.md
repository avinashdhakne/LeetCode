```
int distributeCandies(vector<int>& c) {
return min(unordered_set<int>(begin(c), end(c)).size(), c.size() / 2);
}
```