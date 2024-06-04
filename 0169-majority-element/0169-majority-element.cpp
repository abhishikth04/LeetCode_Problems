class Solution {
public:
// sol : majority element appears more than n / 2 times
// so the majority element should be present at n/2 th position
    int majorityElement(vector<int>& nums) {
        std :: sort(nums.begin() , nums.end());
        int x = nums.size() / 2;
        return nums[x];
        
    }
};