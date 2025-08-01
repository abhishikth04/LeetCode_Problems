class Solution {
public:
// sol : majority element appears more than n / 2 times
// so the majority element should be present at n/2 th position
     int majorityElement(vector<int>& nums) {

        int count = 0;
        int candidate = 0;

        for(int num : nums) {
            if(count == 0)
                candidate = num;

            count += (num == candidate) ? 1 : -1;
        }

    // Step 2: Verify candidate
        count = 0;
        for(int num : nums) {
            if(num == candidate)
                count++;
        }

        return (count > nums.size() / 2) ? candidate : -1;

        // std :: sort(nums.begin() , nums.end());
        // int x = nums.size() / 2;
        // return nums[x];
        
    }
};