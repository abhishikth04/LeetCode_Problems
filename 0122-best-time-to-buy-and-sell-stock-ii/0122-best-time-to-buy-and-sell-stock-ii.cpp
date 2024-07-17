class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        int mini = prices[0];
        for(int i = 0 ; i < prices.size() ; i++){
            mini = min(mini , prices[i]);
            int profit = prices[i] - mini;
            MaxProfit = MaxProfit + profit;
            mini = prices[i];
        }
        return MaxProfit;
        
    }
};