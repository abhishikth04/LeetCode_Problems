class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        std :: vector<int> FlagVec(n+1 , 0);
        std :: sort(nums.begin() , nums.end());
        for(int i : nums){
            FlagVec[i] = 1;
        }
        int missing = 0;
        for(int j = 0 ; j <= n ; j++){
            if(FlagVec[j] == 0){
                missing = j;
            }

            // you could also solve by subracting arraysum - n(n-1)/2
        }
        return missing;
    }
};