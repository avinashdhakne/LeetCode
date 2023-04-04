class Solution {
public:
    int partitionString(string s) {
        vector<int> check(26);
        vector<string> strs;
        string temp;
        for(auto i: s){
            if(!check[i-'a']){
                temp.push_back(i);
                check[i-'a'] = 1;
            }
            else{
                if(temp != ""){
                    strs.push_back(temp);
                }
                temp = "";
                for(int i=0; i<26; i++){
                    check[i] = 0;
                }
                temp.push_back(i);
                check[i-'a'] = 1;
            }
        }
        if(temp != ""){
                    strs.push_back(temp);
                }
            
            for(auto i: strs){
                cout<<i<<" ";
            }
        return strs.size();
    }
};