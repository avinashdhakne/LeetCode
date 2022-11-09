class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> result(t.size());
        stack<int> st;
        
        for(int i=t.size()-1; i>=0; i--){
            while(!st.empty() && t[st.top()] <= t[i])
                st.pop();
                
            if(!st.empty())
                result[i] = st.top() - i;
            
            st.push(i);
        }
        
        return result;
    }
};