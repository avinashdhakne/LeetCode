class Solution {
public:
    string addBinary(string a, string b) {
        
        int len = max(a.size(), b.size());
        while(a.size()!=len)
            a.insert(a.begin(), '0');
        while(b.size()!=len)
            b.insert(b.begin(), '0');
       
        string result;
        int carry = 0;
        for(int i=len-1; i>=0; i--){
            int temp = (int(a[i]-'0') + int(b[i]-'0') + carry);
            int digit = temp % 2;
            result.push_back(char(digit+'0'));
            carry = temp / 2;
            // cout<<result<<" "<<carry<<" "<<temp<<endl;
            
        }
        if(carry)
            result.push_back(char(carry+'0'));
        
        reverse(result.begin(), result.end());
        return result;
    }
};