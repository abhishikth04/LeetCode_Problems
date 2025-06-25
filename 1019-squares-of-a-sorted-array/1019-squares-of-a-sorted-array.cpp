class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n-1;
        int posi = n-1;

        while(left <= right){
            int leftsq = nums[left]*nums[left];
            int rightsq = nums[right]*nums[right];

            if(leftsq > rightsq){
                ans[posi] = leftsq;
                left++;
            } else{
                ans[posi] = rightsq;
                right--;
            }
            posi--;
        }
        return ans;
    }
};