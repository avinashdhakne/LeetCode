class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int countZero =0;
        for(auto i: s){
            if(i=='0'){
                countZero++;
            }
        }
        
        cout<<countZero;
        
        int countOne = 0;
        int result = countZero;
        for(auto i: s){
            if(i=='0'){
                countZero-=1;
            }
            else if(i=='1'){
                countOne++;
            }
            result = min(result, countOne + countZero);
        }
        return result;
    }
};