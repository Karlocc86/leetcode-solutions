class Solution {

private:
    bool isNotValidSquare(vector<vector<char>>& board, int row , int col , char num){

        for(int r = 0 ; r < 9 ; r++){

            if(r != row && board[r][col] == num) return true;
        }

        for(int c = 0 ; c < 9 ; c++){

            if(c!= col && board[row][c] == num) return true;
        }

        int rowIni = (row/3) * 3;

        int colIni = (col/3) * 3;

        for(int r = rowIni ; r < rowIni + 3; r++){

            for(int c = colIni ; c < colIni + 3 ; c++){
                
                if(c != col && r != row && board[r][c] == num) return true;

            }
        }

        return false;
    }


public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
        for(int row = 0 ; row < 9 ; row++){

            for(int col = 0 ; col < 9 ; col++){
                
                if(board[row][col] == '.') continue;

                char num = board[row][col];

                if(isNotValidSquare(board, row, col, num)) return false;

            }
        }

        return true;
    }
};