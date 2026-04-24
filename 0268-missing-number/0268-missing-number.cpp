class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totSum = (n*(n+1)) / 2;

        int NumSum = std :: accumulate(nums.begin() , nums.end() , 0);

        return totSum - NumSum;
    }
};