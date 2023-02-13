class Solution {
public:
    int countOdds(int low, int high) {
        return (high&1 || low&1)? ((high - low)>>1)+1: (high-low)>>1;
    }
};