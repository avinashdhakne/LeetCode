class Solution {
public:
    
    void find(vector<string> &result, string &temp, int left, int right, int n){
        cout<<left<<" "<<right<<" "<<temp<<endl;
        if(left < right){
            return;
        }
        
        if(left > n || right > n){
            return;
        }
        
        if(left == n && right == n){
            result.push_back(temp);
            return;
        }
        
        temp.push_back('(');
        left++;
        find(result, temp, left, right, n);
        left--;
        temp.pop_back();
        
        

        
        cout<<"--------------------------"<<endl;
        
        
        temp.push_back(')');
        right++;
        find(result, temp, left, right, n);
        right--;
        temp.pop_back();
        
        cout<<"**************************"<<endl;
      
    } 
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp;
        find(result, temp, 0, 0, n);
        return result;
        
        
    }
};