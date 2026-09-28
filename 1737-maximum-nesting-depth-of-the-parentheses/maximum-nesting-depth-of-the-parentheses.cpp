class Solution {
public:
    int maxDepth(string s) {

        int currDepth = 0;
        int maxDepth = INT_MIN;
        stack<char> st;

        for(char c : s){

            if( c == '('){
                currDepth++;
                st.push('(');
            } 
            else if(c == ')'){
                currDepth--;
                st.pop();
            }
            
            maxDepth = max(currDepth , maxDepth);
        }

        return maxDepth;
        
    }
};