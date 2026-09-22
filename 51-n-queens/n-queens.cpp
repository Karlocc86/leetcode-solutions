class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {

        unordered_set<int> cols;
        unordered_set<int> negDiag; // (r - c)
        unordered_set<int> posDiag; //(r + c)
        vector<string> board(n , string(n , '.'));
        vector<vector<string>> result;

        backtrack(0,n,cols,negDiag,posDiag,board,result);
        return result;
        
    }

private:

    void backtrack(int r, int n, unordered_set<int>& cols, 
    unordered_set<int>& negDiag, unordered_set<int>& posDiag,
    vector<string>& board, vector<vector<string>>& result
    ){

        if(r == n){
            result.push_back(board);
        }

        for(int c = 0 ; c < n ; c++){

            if(cols.count(c) || negDiag.count(r - c) || posDiag.count( r + c)){
                continue;
            }

            cols.insert(c);
            negDiag.insert(r-c);
            posDiag.insert(r+c);
            board[r][c] = 'Q';

            backtrack(r + 1, n , cols, negDiag, posDiag, board, result);

            cols.erase(c);
            negDiag.erase(r-c);
            posDiag.erase(r+c);
            board[r][c] = '.';

        }



    }


};