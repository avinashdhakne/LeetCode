class Solution {
public:
    string removeDuplicates(string s, int k) {
        int start = 0;
        int end = s.length()-1;
        
        while(start < end){
            swap(s[start++], s[end--]);
        }
        
        stack<pair<int,int>> st;
        string result;
        for(char i: s){
            int count = 1;
            if(!st.empty() && st.top().first == i &&st.top().second == k-1){
                for(int i=1; i<k; i++){
                    st.pop();
                }
            }
            else if(!st.empty() && st.top().first == i){
                count = st.top().second;
                st.push({i,count+1});
            }
            else{
                st.push({i,count});
            }   
        }
    
        while(!st.empty()){
            result.push_back(st.top().first);
            st.pop();
        }
        
        return result;
    }
};