class Solution {
public:
    
    vector<int> ans;

    int countDigit(int num){
        int count;
        while(num!=0){
            count++;
            num=num/10;
        }
        return count;
    }
    
    void findNumber(int num, int n, int k){
        if(countDigit(num)==n){
            ans.push_back(num);
            return;
        }
        for(int i=0; i<=9; i++){
            int prev = num%10;
            if(abs(prev - i) == k){
                int number = num*10 + i;
                findNumber(number, n, k);
            }
        }
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1; i<=9; i++){
            findNumber(i, n,k);
        }
        return ans;   
    }
};