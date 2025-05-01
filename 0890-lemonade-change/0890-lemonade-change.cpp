class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        int i = 0;
        int n = bills.size();
        while(i < n){
            if(bills[i] == 5){
                fives++;
            }
            else if(bills[i] == 10){
                if(fives){
                    fives--;
                    tens++;
                }else{
                    return false;
                }
            }else{
                if(tens && fives){
                    tens--;
                    fives--;
                }
                else if(fives >= 3){
                    fives -= 3;
                }else{
                    return false;
                }
            }
            i++;
        }
        return true;
    }
};