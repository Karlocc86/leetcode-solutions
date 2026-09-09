class Solution {
public:
    int lengthOfLastWord(string s) {


        if(s.size() == 0) return 0;
        int right = s.size() - 1;
        int lenght = 0;
      
        while (right >= 0 && s[right] == ' ') {
            right--;
        }

        while (right >= 0 && s[right] != ' ') {
            lenght++;
            right--;
        }

        return lenght;
        
    }
};