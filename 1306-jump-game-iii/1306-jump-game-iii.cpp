class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int> v(arr.size());
        queue<int> q;
        q.push(start);
        v[start] = 1;
        
        while(!q.empty()){
            int curr = q.front();
            v[curr] = 1;
            q.pop();
            
            if(arr[curr] == 0)
                return true;
    
            int num1 = curr + arr[curr];
            int num2 = curr - arr[curr];
            if(num1>=0 && num1<arr.size() && !v[num1]){
                    q.push(num1);
            }
            if (num2>=0 && num2<arr.size() && !v[num2]){
                    q.push(num2);
            }
                
        }
        return false;

    }
};