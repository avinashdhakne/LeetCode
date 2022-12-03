class Solution {
public:
    string frequencySort(string s) {
        vector<vector<int>> vect(75, vector<int> (2, 0));
        
        for(char i: s){
            vect[i - '0'][0]++;
            if(vect[i - '0'][1] == 0)
                vect[i - '0'][1] = i - '0';
        }
        
        sort(vect.rbegin(), vect.rend());
      
        string temp;
        for(int i=0; i<vect.size(); i++){
            while(vect[i][0]>0){
                temp.push_back(vect[i][1] + '0');
                vect[i][0]--;
            }
        }
        return temp;
    }
};