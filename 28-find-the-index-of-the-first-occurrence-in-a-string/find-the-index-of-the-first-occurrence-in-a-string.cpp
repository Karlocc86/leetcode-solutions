class Solution {
public:
    int strStr(string haystack, string needle) {

        if(haystack.size() < needle.size()) return -1;
        
        int right = needle.size(); 

        for(int left = 0 ; left <= haystack.size() - needle.size() ; left++){

            string subtrs1 = haystack.substr(left,  right);

            if(subtrs1 == needle){
                return left;
            }

        }

        return -1;
        
    }
};