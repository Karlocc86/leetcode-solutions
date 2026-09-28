class Solution {
public:
    int maxDepth(string s) {

        int currDepth = 0;
        int maxDepth = INT_MIN;

        stack<int> st;

        for(char c : s){

            if( c == '('){
                currDepth++;
                st.push(')');
            } 
            else if(!st.empty() && st.top() == c){
                currDepth--;
                st.pop();
            }
            
            maxDepth = max(currDepth , maxDepth);
        }

        return maxDepth;
        
    }
};