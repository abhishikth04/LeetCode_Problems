class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Solvingg using the Greedy method
        // by pushing the goal as clos as poss to the start state
        int goal = nums.size() - 1; // assigning the last index
        for(int i = goal-1 ; i >= 0 ; i--){
            if(i + nums[i] >= goal){
                goal = i;
            }
        }
        return goal == 0;
    }
};