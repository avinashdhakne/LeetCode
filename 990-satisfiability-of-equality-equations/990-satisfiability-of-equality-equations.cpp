class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        vector<char> vect(26,'0');
        for(string &equation : equations){
            if(equation[1] == '='){
                
                if(vect[equation[0] - 'a'] == '0' && vect[equation[3]-'a'] == '0'){
                    if(equation[0] != equation[3]){
                        vect[equation[0] - 'a'] = equation[3];
                        vect[equation[3] - 'a'] = equation[3];
                    }
                  
                }
                
                else if(vect[equation[0] - 'a'] != '0' && vect[equation[3]-'a'] != '0'){
                    if(vect[equation[0] - 'a'] != vect[equation[3]-'a']){
                       
                        char oldParent = vect[equation[0] - 'a'];
                        vect[equation[0] - 'a'] = vect[equation[3] - 'a'];
                        
                        for (int parent = 0; parent < 26; parent++) {
                            
                            if(vect[parent] == oldParent){
                                vect[parent] = vect[equation[3] - 'a'];
                            }
                        }
                        
                    }
                }
                   
                else if(vect[equation[0] - 'a'] == '0' && vect[equation[3] - 'a'] != '0'){
                    vect[equation[0] - 'a'] = vect[equation[3] - 'a'];
                }
                       
                else if(vect[equation[0] - 'a'] != '0' && vect[equation[3]-'a'] == '0'){
                    vect[equation[3] - 'a'] = vect[equation[0] - 'a'];
                }
                
            }  
        }
        cout<<"hi";
         for(auto &i: vect){
            cout<<i<<" ";
        }
                        cout<<endl;
        for(string &equation : equations){
            if(equation[1] == '!'){
                if(vect[equation[0] - 'a'] != '0' && vect[equation[3]-'a'] != '0'){
                    if(vect[equation[0] - 'a'] == vect[equation[3]-'a'])
                        return false;
                }
                
                else if(vect[equation[0] - 'a'] == '0' && vect[equation[3]-'a'] == '0'){
                    if(equation[0] == equation[3])
                        return false;
                }
            }
        }
        
        for(auto &i: vect){
            cout<<i<<" ";
        }
        return true;
    }
};