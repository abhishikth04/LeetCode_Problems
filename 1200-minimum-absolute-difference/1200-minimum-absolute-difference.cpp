class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        std::sort(arr.begin() , arr.end());

        int absMin = INT_MAX;
        int n = arr.size();
        for(int i = 1 ; i < n ; i++){
            absMin = min(absMin , (arr[i] - arr[i-1]));
        }

        vector<vector<int>> answ;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] - arr[i-1] == absMin){
                answ.push_back({arr[i-1] , arr[i]});
            }
        }
        return answ;
    }
};