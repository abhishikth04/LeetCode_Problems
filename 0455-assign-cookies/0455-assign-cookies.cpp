class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       std::sort(g.begin() , g.end());
       std::sort(s.begin() , s.end());

       int i = 0;
       int j = 0;
       int n = s.size();
       int m = g.size();
       int cnt = 0;
       while(i < n && j < m){
        if(s[i] >= g[j]){
            cnt++;
            i++;
            j++;
        }else{
            i++;
        }
       } 
       return cnt;
    }
};