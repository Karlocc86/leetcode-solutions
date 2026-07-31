
class Solution {
public:


    string reverseVowels(string s) {

        std::unordered_set<char> set= { 'a', 'e', 'i', 'o','u'};

        int left = 0;
        int right = s.size() - 1;

        while(left < right){

            while( left < right && set.count(tolower(s[left])) == 0){
                left++;
            }
            while(left < right && set.count(tolower(s[right])) == 0){
                right--;
            }

            swap(s[left] , s[right]);
            left++;
            right--;


        }

        return s;
    }
};