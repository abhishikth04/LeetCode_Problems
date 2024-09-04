class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(auto i = 0 ; i < s.size() ; i++){
            if(isalnum(s[i])){
                st += tolower(s[i]);
            }
        }
        string reversed(st.rbegin() , st.rend());
        if(st == reversed){
            return true;
        }
        else{
            return false;
        }
        
    }
};