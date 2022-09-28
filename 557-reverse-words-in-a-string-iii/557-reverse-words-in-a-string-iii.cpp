class Solution {
public:
    string reverseWords(string s) {
        stack<char> st;
        string result = "";
        int i=0;
        while(i<s.length()){
            while(s[i]!=' '){
                if(i<s.length()){
                     st.push(s[i]);
                    i++;
                }
                else break;
               
            }
            i++;
            
            while(!st.empty()){
                result.push_back(st.top());
                st.pop();
            }
            
            if(i<=s.length()-1){
                    result.push_back(' ');
            }
        }
        return result;

    }
};