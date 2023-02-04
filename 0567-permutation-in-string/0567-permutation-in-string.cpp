class Solution {
public:
    bool isEqual(vector<int> vect1, vector<int> vect2){
        for(int i=0; i<vect1.size(); i++){
            if(vect1[i]!=vect2[i])
                return false;
        }
        return true;
    }
   
    bool checkInclusion(string s1, string s2) {
        vector<int> vect1(26,0);
        int index;
        for(int i=0;i<s1.length();i++){
            index = s1[i] - 'a';
            vect1[index]++;
        }
        
        int i = 0;
        int window = s1.length();  
        vector<int> vect2(26,0);
        
        while(i<window && i<s2.length()){
            index = s2[i] - 'a';
            vect2[index]++;
            i++;
        }
        
        if(isEqual(vect1,vect2)){
            return 1;
        }
        
        while(i<s2.length()){
            index = s2[i] - 'a';
            vect2[index]++;
        
            index = s2[i-window] - 'a';
            vect2[index]--;
            
            i++;
            
            if(isEqual(vect1,vect2)){
                return true;
            }
        }
        
        return false;
    }
};