class Solution {
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string result;
        int index = 0;
        spaces.push_back(0);
        for (int i = 0; i < s.length(); i++)
        {
            if (i == spaces[index])
            {
                result.push_back(' ');
                result.push_back(s[i]);
                index++;
            }
            else{
                result.push_back(s[i]);
            }       
        }
        return result;
    }
};