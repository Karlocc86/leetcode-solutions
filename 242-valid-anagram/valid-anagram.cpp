class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> seen(26,0);

        for(char c : s){
            
            seen[c - 'a']++;
        }

        for(char c : t){
            seen[c - 'a']--;
        }

        for(int x : seen){
            if(x != 0){
                return false;
            }
        }

        return true;

        
    }
};