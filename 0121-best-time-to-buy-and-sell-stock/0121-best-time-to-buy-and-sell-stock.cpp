class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int mini = prices[0];

        // Everytime find the min , calc profit , and check in one direction

        for(int i = 1 ; i < prices.size() ; i++){
            mini = min(mini , prices[i]);
            int profit = prices[i] - mini;
            maxProfit = max(maxProfit , profit);
        }
        return maxProfit;
    }
};