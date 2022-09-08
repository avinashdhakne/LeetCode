***Approch 1:***
```
class Solution {
public:
int reverse(int x) {
vector<int> digit;
long result = 0;
long power = 1;
while(x!=0){
digit.push_back(x%10);
x/=10;
}
for(int i=digit.size()-1; i>=0;i--){
result += digit[i] * power;
cout<<result;
power *= 10;
}
if(result > INT_MAX || result < INT_MIN)
return 0;
return result;
}
};