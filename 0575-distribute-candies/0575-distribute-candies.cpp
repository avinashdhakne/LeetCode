class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> vect;
        int count = 0;
        for(auto candy: candies){
            if(vect.count(candy)==0){
                count++;
            }
            vect.insert(candy);
        }
        
        if(count> candies.size()/2)
            return candies.size()/2;
        return count;
    }
};