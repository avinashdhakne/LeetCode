```
class Solution {
public:
long long minimumTime(vector<int>& time, int totalTrips) {
int result = 0;
int tripNo = 0;
while(result < totalTrips){
result = 0;
tripNo++;
for(auto i: time){
result += (tripNo / i);
}
}
return tripNo;
}
};
```