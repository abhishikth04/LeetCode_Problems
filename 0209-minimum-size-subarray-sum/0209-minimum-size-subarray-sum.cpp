class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currSum = 0;
        int window = INT_MAX;
        int start = 0 , end = 0;
        for(end = 0 ; end < nums.size() ; end++){
            currSum += nums[end];
            while(currSum >= target){
                window = std::min(window , end-start+1);
                currSum -= nums[start];
                start++;
            }
        }
        if(window == INT_MAX){
            return 0;
        }
        else{
            return window;
        }

    }
};