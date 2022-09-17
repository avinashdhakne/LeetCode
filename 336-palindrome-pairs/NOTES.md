auto iter = vect.find(right);
if(iter!=vect.end()){
result.push_back({iter->second, i});
}
}
if(isPalindrom(right)){
auto iter = vect.find(left);
if(iter!=vect.end()){
result.push_back({i,iter->second});
}
}
}
}
return result;
}
bool isPalindrom(string str){
int i=0, j=str.length()-1;
if(str=="") return false;
while(i<j){
if(str[i]!=str[j])
return false;
i++; j--;
}
return true;
}
};
```