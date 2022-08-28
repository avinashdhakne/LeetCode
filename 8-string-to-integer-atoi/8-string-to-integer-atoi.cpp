class Solution {
public:
    int myAtoi(string s) {
        string temp = "";
        long long num = 0;
        int i=0;
        
        while(i<s.length()){
            while(s[i]==' '){
                i++;
            }
            if((s[i]=='+' || s[i]=='-')&&!(s[i+1]>='0' && s[i+1]<='9')){
                return num; 
            }
            while((s[i]>='0' && s[i]<='9') || (s[i]=='+' || s[i]=='-')){
             
                if((s[i]=='+' || s[i]=='-') && temp.length()>=1){
                    break;
                }
                temp.push_back(s[i]);
                i++;
            }
            break;
        }
        
        cout<<temp<<endl;

        int neg = 0;
        if(temp[0]=='-'){
            neg = 1;
            temp.erase(temp.begin());
        }
        else if(temp[0]=='+'){
            temp.erase(temp.begin());
        }
        
        int ind = 0;
        while(temp[ind]=='0'){
            ind++;
        }
        
        temp.erase(0,ind);      
        
        cout<<temp;
        long long power = 1;
        int digit;
        
        for(int i=temp.length()-1; i>=0;i--){
            if(temp[i]>='0' && temp[i]<='9'){
                digit = temp[i] - '0';
                num += (digit * power);
                
                if((num>INT_MAX)||(power>INT_MAX)){
                    if(neg){
                        return INT_MIN;
                    }
                    else{
                        return INT_MAX;
                    }
                }
                
                power *= 10;
                
                
            }
        }
        
        if(neg){
            num -= num * 2;
        }
            

        
        return num;
    }
};