class Solution
{
public:
    vector<string> printVertically(string s) {
        vector<string> words;
        vector<string> result;

        int index = 0;
        while (index < s.length()) {
            string temp;
            while (s[index] != ' ' && index < s.length()) {
                temp.push_back(s[index++]);
            }
            index++;
            words.push_back(temp);
        }

        int maxLength = 0;
        for (string word : words) {
            if (word.length() > maxLength)
                maxLength = word.length();
            
        }

        int index2 = 0;
        while (index2 < maxLength) {
            string temp;
            for (string word : words) {
                if (index2 < word.length())
                    temp.push_back(word[index2]);
                
                else
                    temp.push_back(' ');
            }

            index2++;
            while (temp[temp.length() - 1] == ' ') {
                temp.pop_back();
            }
            result.push_back(temp);
        }
        
        return result;
    }
};