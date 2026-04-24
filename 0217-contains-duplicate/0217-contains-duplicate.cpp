class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numSet(nums.begin() , nums.end());
        return nums.size() > numSet.size();
    }
};