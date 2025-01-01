class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char , int> freq;

       for(char i : magazine){
        freq[i]++;
       }
       for(char i : ransomNote){
        if(freq[i] > 0){
            freq[i]--;
        }
        else{
            return false;
        }
       } 
       return true;
 
    }
};