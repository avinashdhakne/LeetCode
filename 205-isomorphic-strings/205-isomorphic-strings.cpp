class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> map;
        set<int> set;
        
        for(int i=0; i<s.length(); i++){
            if(map.count(s[i])==0 && set.count(t[i])==0){
                map[s[i]] = t[i];
                set.insert(t[i]);
            }
            else if(map.count(s[i])==0 && set.count(t[i])) return false;
            else if(map[s[i]]!=t[i]) return false;
        }
        return true;
    }
};