class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;

        if(s.length() < p.length()) 
            return result;

        vector<int> pVect(26);
        vector<int> tempVect(26);
    
        for(int i=0; i<p.length(); i++){
            pVect[p[i] - 'a']++;
            tempVect[s[i] - 'a']++;
        }
        
        for(int i=0; i<=s.length()-p.length(); i++){ 
            if(i > 0){
                cout<<s[i-1]<<" "<<s[i + p.size() - 1]<<endl;
                tempVect[s[i-1] - 'a']--;
                tempVect[s[i+p.length()-1] - 'a']++;
            }
            
            // for(auto i: tempVect){
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            // for(auto i: pVect){
            //     cout<<i<<" ";
            // }
            // cout<<endl;
            
            if(tempVect == pVect){
                    result.push_back(i);
           }
        }
        return result;
    }
    
};