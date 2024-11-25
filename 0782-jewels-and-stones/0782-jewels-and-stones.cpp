class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
       for(auto i : stones){
        if(jewels.find(i) != std :: string :: npos){
            count++;
        }
       }
       return count; 
    }
};