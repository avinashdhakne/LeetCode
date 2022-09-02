class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrise = prices[0];

        for(int j=0; j<prices.size(); j++){
            minPrise = min(minPrise, prices[j]);
            int profit = prices[j] - minPrise;
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
        
    }
};