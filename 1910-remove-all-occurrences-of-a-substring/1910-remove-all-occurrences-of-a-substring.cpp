class Solution {
public:
    string removeOccurrences(string s, string part) {
    while (s.size() != 0 && s.find(part) <= s.size() - 1)
        {
            s.erase(s.find(part), part.size());
        }
        return s;
        
       
    }
};