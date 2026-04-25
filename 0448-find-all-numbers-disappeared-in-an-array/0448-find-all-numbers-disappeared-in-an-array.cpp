class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> flag(n+1 , 0);

        for(int i : nums){
            flag[i] = 1;
        }

        vector<int> ans;
        for(int i = 1 ; i < n+1 ; i++){
            if(flag[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};