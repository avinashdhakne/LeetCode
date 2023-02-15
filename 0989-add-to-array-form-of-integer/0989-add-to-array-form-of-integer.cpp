class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry = 0;
        for(int i=n; i>=0; i--){
            int digit = 0;
            if(k > 0){
                digit = k % 10;
                k /= 10;
            }
                
            int sum = num[i] + digit + carry;
            num[i] = (sum) % 10;
            carry = sum/10;
        }
        while(k!=0){
            int sum = k%10 + carry;
            num.insert(num.begin(), (sum)%10);
            k/=10;
            carry = sum/10;
        }
        
        if(carry){
            num.insert(num.begin(), carry);
        }
        
        return num;
    }
};