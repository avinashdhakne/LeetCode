class Solution {
    vector<int> toVect(int num){
        vector<int> vect(10,0);
        
        while(num != 0){
            vect[num%10]++;
            num/=10;
        }
        return vect;
    }
    
    bool isVectEqaul(vector<int> vect1, vector<int> vect2){
        for(int i=0; i<vect1.size();i++){
            if(vect1[i]!=vect2[i])
                return false;
        }
        return true;
    }
    
public:
    bool reorderedPowerOf2(int n) {
        for(int i=1; i<=pow(10,9);i*=2){
            if(isVectEqaul(toVect(i),toVect(n))){
                return true;
            }
        }
        return false;
    }
};