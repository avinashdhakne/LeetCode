class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        vector<int> subStrlen; 
        int s = 0;
        int e = 0;
        int n = str.length();
        set<char> grp;
        
        while(s < n && e < n)
        {
            if(grp.find(str[s]) == grp.end()){
                grp.insert(str[s]);
                s++;
            }
            else{
                grp.erase(str[e]);
                e++;
            }  
            subStrlen.push_back(s-e);
        }
        
        int max = 0;
        for(auto i: subStrlen){
            if(i>max){
                max = i;
            }
        }
        
        return max;
    }
};