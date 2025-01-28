class Solution {
public:
    bool isHappy(int n) {

        set<int> check;
       while(true){
        int sum = 0;
        while(n > 0){
            sum += pow(n % 10 , 2);
            n /= 10;
        }
         n = sum;
         if(n == 1){ break; }
         else if(check.find(n) != check.end()){
            return false;
         }
         else{
            check.insert(n);
         }
       } 
       return true;
    }
};