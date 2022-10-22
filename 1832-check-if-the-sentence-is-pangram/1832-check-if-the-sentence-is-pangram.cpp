class Solution {
public:
    bool checkVect(vector<int> vect){
        for(auto i: vect){
            if(i==0)
                return false;
        }
        return true;
    }
    bool checkIfPangram(string sent) {
        vector<int> vect(26,0);
        for(auto i: sent)
            vect[i-'a']++;
        
        return checkVect(vect);
    }
};