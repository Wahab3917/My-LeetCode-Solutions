class Solution {

    public:
    
        int maxProfit(vector<int>& prices) {

            int buy = prices[0];
            int maxProfit = 0;

            for (int j = 1; j < prices.size(); j++) {
                if (prices[j] < buy) {
                    buy = prices[j];
                } else {
                    if (prices[j] - buy > maxProfit) {
                        maxProfit = prices[j] - buy;
                    }
                }
            }

            return maxProfit;

        }

};