class Solution {
public:
bool isSubsequence(string s, string t) {
int i=0, j=0;
while(i<s.length()){
if(j == t.length())
return false;
if(s[i]==t[j]) {
i++;
j++;
}
else {
j++;
​
}
}
return true;
}
};