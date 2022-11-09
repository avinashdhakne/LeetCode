```
class StockSpanner {
public:
vector<int> vect;
StockSpanner() {
}
int next(int price) {
vect.push_back(price);
int count = 1;
for(int i = 0; i<vect.size()-1; i++){
if(vect[i]<=price){
count++;
}
else{
count = 1;
}
}
return count;
}
};
```