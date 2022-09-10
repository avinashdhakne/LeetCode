class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> vect = {{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
        stack<char> st;
        for(char &i: s){
            if(vect[i] < 0){
                st.push(i);
            }
            else{
                if(st.empty() || ((vect[st.top()] + vect[i]) != 0)) return false;
                st.pop();

            }
        }

        
        if(st.empty()) return true;
        return false;
        
    }
};