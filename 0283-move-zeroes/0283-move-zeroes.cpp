class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        std :: vector<int> ans(n , 0);
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                ans[j++] = nums[i];
            }
        }
        for(int i = 0 ; i < n ; i++){
            nums[i] = ans[i];
        }
    }
};