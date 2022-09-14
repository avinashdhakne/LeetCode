class Solution {
public:
int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(begin(tokens),end(tokens));
    int score =0,maxscore=0, n = tokens.size(),i=0,j=n-1;
    while(i<=j){
        int f=0;
        maxscore =max(maxscore,score);
        if(score==0 and power>=tokens[i]){
            power-=tokens[i];
            i++;
            score++;
            f=1;
        }
        else if(score >0 and power < tokens[i])    {
            score--;
            power+=tokens[j];
            j--;
            f=1;
        }
        else if(tokens[i]<=power){
            score++;
            power-=tokens[i];
            i++;
            f=1;
        }
        maxscore =max(maxscore,score);
        if(f==0)break;
    }
    return maxscore;   
}
};