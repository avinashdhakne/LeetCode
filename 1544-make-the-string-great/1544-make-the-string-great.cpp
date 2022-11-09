class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(abs(st.top()-s[i]) == 32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        
        string result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};