class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &i: s){
            if(i=='{'||i=='['||i=='('){
                st.push(i);
            }
            else{
                cout<<'1';
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(!((top == '[' && i == ']')||
                    (top == '{' && i == '}')||
                    (top == '(' && i == ')'))) return false;      
            }
        }
        cout<<'3';

        if(st.empty()) return true;
        return false;
    }
};