class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPr = prices[0];
       int maxxProfit = 0;

       for(int i = 0 ; i < prices.size() ; i++){
            minPr = std::min(minPr , prices[i]);
            maxxProfit = std::max(maxxProfit , prices[i] - minPr);
       } 
       return maxxProfit;
    }
};