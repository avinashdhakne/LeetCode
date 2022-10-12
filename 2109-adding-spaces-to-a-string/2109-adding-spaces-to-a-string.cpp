class Solution {
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string result;
        int index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (index < spaces.size() && i == spaces[index])
            {
                result.push_back(' ');
                index++;
            }
            result.push_back(s[i]);
        }
        return result;
    }
};