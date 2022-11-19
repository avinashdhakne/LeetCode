class Solution {
public:
    
void solve(string digits, vector<string> &output, int index, vector<string> letters, string ans)
{
    if (index >= digits.length())
    {
        output.push_back(ans);
        return;
    }

    string values = letters[digits[index] - '0'];
    for (int i = 0; i < values.length(); i++)
    {
        ans.push_back(values[i]);
        solve(digits, output, index + 1, letters, ans);
        ans.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    
    vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;
    vector<string> output;
    string ans;
    if(digits.length() == 0){
        return output;
    }
    solve(digits, output, index, letters, ans);
    return output;
}
};