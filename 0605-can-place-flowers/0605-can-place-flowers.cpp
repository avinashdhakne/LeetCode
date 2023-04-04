class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int total = 0;
        int len = flowerbed.size();
        for(int i=0; i<len; i++){
            int prev = (i==0)?0:flowerbed[i-1];
            int next = (i==(len-1))?0: flowerbed[i+1];
            if(!prev && !next && !flowerbed[i]){
                flowerbed[i] = 1;
                total++;
            }
        }
        cout<<total<<" "<<n<<endl;
        return total>=n;
    }
};