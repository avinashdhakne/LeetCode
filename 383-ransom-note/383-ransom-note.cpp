class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vect(26,0);
        int index;
        for(int i=0; i<magazine.length();i++){
            index = magazine[i] - 'a';
            vect[index]++;
        }
        
        for(int i=0; i<ransomNote.length(); i++){
            index = ransomNote[i] - 'a';
            if(vect[index] == 0){
                return false;
            }
            else{
                vect[index]--;
            }
        }
        return true;
    }
};