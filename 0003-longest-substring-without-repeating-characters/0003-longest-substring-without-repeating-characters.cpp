class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left = 0;
        int max_len = INT_MIN;
        int n = s.size();

        for(int right = 0 ; right < n ; right++){
            while(window.find(s[right]) != window.end()){ 
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            max_len = std::max(max_len , right-left+1);
        }
        return (max_len == INT_MIN) ? 0 : max_len;
    }
};