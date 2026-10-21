class Solution {

    void backtrack(int open,int close , int n, vector<string>& sol,string path){

        if(path.size() == n * 2){
            sol.push_back(path);
            return;
        }

        if(open < n){
            path+= '(';
            backtrack(open + 1, close, n, sol,path);
            path.pop_back();
        }

        if(close < open){
            path+=')';
            backtrack(open, close + 1, n ,sol, path);
            path.pop_back();
        }

    }

       
public:
    vector<string> generateParenthesis(int n) {

        vector<string> sol;
        string path;
        backtrack(0,0, n, sol, path);

        return sol;

    }
};