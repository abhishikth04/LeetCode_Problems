class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> track;
        for(int i : nums){
            if(track.find(i) != track.end()){
                return true;
            }
            track.insert(i);
        }
        return false;
    }
};