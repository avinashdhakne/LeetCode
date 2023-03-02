```
class Solution {
public:
int compress(vector<char>& chars) {
int i = 0, j;
int count = 0;
int ansIndex = 0;
while(i<chars.size()){
j = i + 1;
while(j<chars.size() && chars[i] == chars[j]){
j++;
}
chars[ansIndex++] = chars[i];
count = j - i;
if(count > 1){
string countstr = to_string(count);
for(char &digit: countstr){
chars[ansIndex++] = digit;
}
}
i=j;
}
return ansIndex;
}
};
```