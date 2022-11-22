}
return min;
}
};
```
```
class Solution {
public:
int pattern(int n){
if(n<=0){
return 0;
}
int minimum = n;
for(int i=1; pow(i,2)<=n; i++){
minimum = min(pattern(n-i*i),minimum);
}
return minimum+1;
}
int numSquares(int n) {
return pattern(n);
}
};
```