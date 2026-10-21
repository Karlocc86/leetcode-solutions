class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int> alp(26, 0);

        for(char c : s){

            alp[c - 'a']++;
        }

        for(char c : t){

            alp[c - 'a']--;
        }

        for(int x : alp){
            if(x != 0) return false;
        }

    return true;

        
    }
};