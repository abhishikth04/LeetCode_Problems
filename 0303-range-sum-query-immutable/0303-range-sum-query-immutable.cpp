class NumArray {
public:
    vector<int> nums;
    vector<int> prefix;
    NumArray(vector<int>& nums) {
       this->nums = nums; 
       int n = nums.size();
       prefix.resize(n);
       prefixCalc(nums);
    }
    
    int sumRange(int left, int right) {
        return left-1 >= 0?prefix[right] - prefix[left-1]:prefix[right];
    }

    void prefixCalc(vector<int> nums){
        prefix[0] = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */