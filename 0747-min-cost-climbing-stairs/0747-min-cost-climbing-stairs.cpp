class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Using Memoization
        int n = cost.size();
        vector<int> dp(n+1 , -1);
        dp[0] = 0;
        dp[1] = 0;
        
        for(int i = 2 ; i <= n ; i++){
            dp[i] = min(
                dp[i-1] + cost[i-1],
                dp[i-2] + cost[i-2]
            );
        }
        return dp[n];

    }
};

// class Solution {
// public:
//    // Using Memoization
//     int costCalc(int ind , vector<int> &cost , vector<int> dp){
//         if(ind <= 1) return 0;
//         if(dp[ind] != -1) return dp[ind];
//         int oneS = costCalc(ind-1 , cost , dp) + cost[ind-1];
//         int twoS = costCalc(ind-2 , cost , dp) + cost[ind-2];

//         return dp[ind] = std::min(oneS , twoS);
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n+1 , -1);
//         return costCalc(n , cost , dp);
//     }
// };