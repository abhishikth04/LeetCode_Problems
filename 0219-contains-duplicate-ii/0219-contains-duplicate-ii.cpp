class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_set<int> check;

       for(int i = 0 ; i < n ; i++){
        if(check.size() <= k && check.find(nums[i]) != check.end()){
            return true;
        }
        check.insert(nums[i]);
        if(check.size() > k){
            check.erase(nums[i-k]);
        }
       } 
       return false;
    }
};