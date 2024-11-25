class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i : nums){
            std :: string st = to_string(i);
            if(st.size() % 2 == 0){
                ++count;
            }
        }
        return count;
    }
};