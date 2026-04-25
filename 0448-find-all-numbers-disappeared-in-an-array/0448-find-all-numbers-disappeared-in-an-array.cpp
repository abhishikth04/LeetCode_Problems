class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> numbers(nums.begin() , nums.end());
        vector<int> ans;
        for(int i = 1 ; i < nums.size() + 1 ; i++){
            if(numbers.find(i) == numbers.end()){
              ans.push_back(i);
            }
        }
        return ans;
    }
};