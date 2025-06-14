class Solution {
public:
    int findMin(vector<int>& nums) {
       int left = 0;
       int right = nums.size() - 1;
       int mid = (left + right)/2;
       int mini = nums[mid];

       while(left <= right){
        mid = (left + right)/2;
        mini = std::min(mini , nums[mid]);

        if(nums[right] < nums[mid]){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
       }
       return mini;
    }
};