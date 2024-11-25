class Solution {
public:
    string toLowerCase(string s) {
        for(auto &i : s){
            if(!islower(i)){
                i = tolower(i);
            }
        }
        return s;
    }
};