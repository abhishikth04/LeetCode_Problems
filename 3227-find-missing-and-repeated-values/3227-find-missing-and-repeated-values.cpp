class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n * n;

        long long sum_actual = 0, sum_sq_actual = 0;
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < n ; j++) {
                int val = grid[i][j];
                sum_actual += val;
                sum_sq_actual += 1LL * val * val;
            }
        }

        long long sum_ideal = (1LL * m * (m + 1)) / 2;
        long long sum_sq_ideal = (1LL * m * (m + 1) * (2 * m + 1)) / 6;

        long long S = sum_actual - sum_ideal;
        long long P = sum_sq_actual - sum_sq_ideal;

        long long x_plus_y = P / S;
        int x = (S + x_plus_y) / 2;
        int y = x - S;

        return {x, y}; // x = repeated, y = missing
    }
};

// int n = grid.size();
//         int m = n*n;
//         vector<int> flags(m+1 , 0);
//         int a;
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(flags[grid[i][j]] == 1){
//                     a = grid[i][j];
//                 } else{
//                     flags[grid[i][j]] = 1;
//                 }
//             }
//         }
//         int b;
//         for(int i = 1 ; i < m+1 ; i++){
//             if(flags[i] == 0){
//                 b = i;
//             }
//         }

//         return {a , b};