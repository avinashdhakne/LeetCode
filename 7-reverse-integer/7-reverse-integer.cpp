class Solution {
public:
    int reverse(int x) {
        vector<int> digit;
        long result = 0;
        long power = 1;
        
        while(x!=0){
            result = result*10 + x%10;
            cout<<result<<endl;
            x/=10; 
        }
        
    
        
        if(result > INT_MAX || result < INT_MIN)
            return 0;
        
        return result;
    }
};