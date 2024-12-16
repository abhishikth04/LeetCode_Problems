class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            std :: reverse(nums.begin() , nums.end());
            return;
        }
        
        for(int i = nums.size() - 1 ; i > pivot ; i--){
            if(nums[i] > nums[pivot]){
                std::swap(nums[i] , nums[pivot]);
                break;
            }
        }
        
        std::reverse(nums.begin() + pivot + 1 , nums.end());
        return;
    }
};