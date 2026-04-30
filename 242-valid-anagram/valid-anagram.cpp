class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

       vector<int> maicountermailegacy(26,0);

        for( int i = 0 ; i < s.size() ; ++i ){

            maicountermailegacy[s[i] -'a']++;
            maicountermailegacy[t[i] - 'a']--;

        }
       

        for(int x : maicountermailegacy){
            if(x != 0) return false;
        }

        return true;
    }
};