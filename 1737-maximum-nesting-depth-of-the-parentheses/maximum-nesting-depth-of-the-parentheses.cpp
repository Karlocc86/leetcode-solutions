class Solution {
public:
    int maxDepth(string s) {

        int currDepth = 0;
        int maxDepth = INT_MIN;

        for(char c : s){

            if( c == '('){
                currDepth++;
            } 
            else if(c == ')'){
                currDepth--;
            }
            
            maxDepth = max(currDepth , maxDepth);
        }

        return maxDepth;
        
    }
};