class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<int,int>> st;
        string result;
        
        for(char i: s){
            int count = 1;
            if(!st.empty() && st.top().first == i &&st.top().second == k-1){
                st.pop();
            }
            else if(!st.empty() && st.top().first == i){
                st.top().second++;
                
            }
            else{
                st.push({i,count});
            }   
        }
    
        while(!st.empty()){
            while(st.top().second--)
                result += st.top().first;
            
            st.pop();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};