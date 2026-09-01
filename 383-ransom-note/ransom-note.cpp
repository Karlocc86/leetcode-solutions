class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> mgz;

        for(char c : magazine){
            mgz[c]++;
        }

        for(char c : ransomNote){

            if(mgz[c] == 0){
                return false;
            }
            else{
                mgz[c]--;
            }
        }

        return true;
    }
};