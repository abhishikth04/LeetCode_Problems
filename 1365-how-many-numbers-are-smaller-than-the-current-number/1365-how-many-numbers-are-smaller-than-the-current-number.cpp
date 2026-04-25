class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy(nums.begin() , nums.end());
        std::sort(copy.begin() , copy.end());
        unordered_map<int , int> mp;
        for(int i = 0 ; i < copy.size() ; i++){
            if(mp.find(copy[i]) == mp.end()){
                mp[copy[i]] = i;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            nums[i] = mp[nums[i]];
        }

        return nums;
    }
};