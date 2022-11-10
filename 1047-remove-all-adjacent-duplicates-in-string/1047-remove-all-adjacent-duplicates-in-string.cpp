class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        for(int i: s){
            if(!result.empty() && result.back()==i){
                result.pop_back();
            }
            else{
                result.push_back(i);
            }
        }
        return result;
    }
};