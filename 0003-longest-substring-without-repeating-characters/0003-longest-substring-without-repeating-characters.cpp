class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

    int left = 0;
    int maxLen = 0;

    for(int right = 0; right < s.size(); right++) {
        char ch = s[right];

        if(mp.find(ch) != mp.end()) {
            left = max(left, mp[ch] + 1);
        }

        mp[ch] = right;

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;


        // unordered_set<char> window;
        // int left = 0;
        // int max_len = INT_MIN;
        // int n = s.size();

        // for(int right = 0 ; right < n ; right++){
        //     while(window.find(s[right]) != window.end()){ 
        //         window.erase(s[left]);
        //         left++;
        //     }
        //     window.insert(s[right]);
        //     max_len = std::max(max_len , right-left+1);
        // }
        // return (max_len == INT_MIN) ? 0 : max_len;
    }
};