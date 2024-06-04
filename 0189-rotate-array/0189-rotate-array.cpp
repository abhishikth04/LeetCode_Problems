class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
        k = k % nums.size();
        // reversing entire array
        std :: reverse(nums.begin() , nums.end());

        // reversing first K elements
        std :: reverse(nums.begin() , nums.begin()+k);

        // reversingg next k elements
        std :: reverse(nums.begin()+k , nums.end());
    }
};