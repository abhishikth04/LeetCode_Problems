class Solution {
public:

    void Subs(int ind, vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums){
        ans.push_back(ds);

        for(int i = ind ; i < nums.size() ; i++){
            if(ind != i && nums[i] == nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            Subs(i+1, ds, ans, nums);
            ds.pop_back();
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        std::sort(nums.begin() , nums.end());
        Subs(0, ds, ans, nums);
        return ans;
    }
};