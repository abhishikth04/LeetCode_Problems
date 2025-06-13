class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int min_len = INT_MAX;
        int left = 0;
        int n = nums.size();

        for(int right = 0 ; right < n ; right++){
            sum += nums[right];

            while(sum >= target){
                min_len = std::min(min_len , right - left+1);
                sum -= nums[left];
                left++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};