class Solution {
public:
    string pushDominoes(string dom) {
        int n=dom.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        char prev = '.';
        int time = 1;
        for(int i=0; i<n; i++){
            if(dom[i] == 'R'){
                prev = 'R';
                time = 1;
            }
            else if(dom[i] == 'L'){
                prev = 'L';
            }
            else if(dom[i] == '.' && prev == 'R'){
                right[i] = time;
                time++;
            }
        }
        
        prev = '.';
        time = 1;
        
        for(int i = n-1; i >= 0; i--){
            if(dom[i] == 'L'){
                prev = 'L';
                time = 1;
            }
            else if(dom[i] == 'R'){
                prev = 'R';
            }
            else if(dom[i] == '.' && prev == 'L'){
                left[i] = time;
                time++;
            }
        }
        
        string result = "";
        for(int i=0; i<n; i++){
            if(dom[i] == 'L' || dom[i]=='R' && (left[i] == 0 && right[i] == 0))
                result.push_back(dom[i]);
        
            else if(dom[i]=='.' && left[i]==0 && right[i] != 0)
                result.push_back('R');
        
            else if(dom[i]='.' && right[i]==0 && left[i]!=0)
                result.push_back('L');
        
            else if(dom[i] = '.' && right[i]>left[i])
                result.push_back('L');
        
            else if(dom[i] = '.' && right[i]<left[i])      
               result.push_back('R');
               
            else if(dom[i] = '.' && right[i]==left[i])      
               result.push_back('.');

        }
               return result;
    }
};