class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char smap[128] = {0};
        char tmap[128] = {0};
        int n = s.size();

        for(int i = 0 ; i < n ; i++){
            if(smap[s[i]] != tmap[t[i]]){
                return false;
            }else{
                smap[s[i]] = i+1;
                tmap[t[i]] = i+1;
            }
        }
        return true;
    }
};