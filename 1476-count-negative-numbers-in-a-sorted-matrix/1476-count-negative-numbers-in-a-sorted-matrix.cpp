class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int ans = 0;
       for(auto &a : grid){
            ans += cntNeg(a);
       }

       return ans; 
    }

    int cntNeg(vector<int> &a){
        if(a[0] < 0) return a.size();
        if(a[a.size()-1] >= 0) return 0;

        int l = 0;
        int h = a.size()-1;
        int ind = 0;
        while(l <= h){
            int mid = l + (h - l) / 2;
            if(a[mid] < 0){
                ind = mid;
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return a.size() - ind;
    }
};