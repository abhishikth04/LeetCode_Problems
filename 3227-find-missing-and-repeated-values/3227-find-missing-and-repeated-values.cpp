class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n*n;
        vector<int> flags(m+1 , 0);
        int a;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(flags[grid[i][j]] == 1){
                    a = grid[i][j];
                } else{
                    flags[grid[i][j]] = 1;
                }
            }
        }
        int b;
        for(int i = 1 ; i < m+1 ; i++){
            if(flags[i] == 0){
                b = i;
            }
        }

        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};