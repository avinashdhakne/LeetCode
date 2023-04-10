class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i: s){
            if(st.empty() && (i == '}' || i == ']' || i == ')')) { 
                return false;
            }
            else if(st.empty() && (i == '{' || i == '[' || i == '(')){
                st.push(i);
            }
            else {
                char curr = st.top();
                if((curr == '{' && i=='}') || (curr == '[' && i==']') || (curr == '(' && i==')'))                     st.pop();
                else 
                    st.push(i);
            }
        }
        return st.empty();
    }
};