class Solution {
public:
    string defangIPaddr(string address) {
        std :: string defanged = "";
        for(auto i : address){
            if(i == '.'){
                defanged += "[.]";
            }
            else{
                defanged += i;
            }
        }
        return defanged;
    }
};