class Solution {
public:

    
    bool isValidSquare(vector<vector<char>>& board, int row, int col, char number){

        for(int c = 0 ; c < 9 ; c++){

            if(board[row][c] == number) return false;
        }

        for(int r = 0 ; r < 9 ; r++){

            if(board[r][col] == number) return false;
        }

        using tuple = pair<int,int>;

        tuple iniEnd[2]; 

        iniEnd[0].first = (row/3) * 3; //coorderanda y de inicio
        iniEnd[0].second = (col / 3) * 3; // coordenada y de inicio

        iniEnd[1].first = (row/3) * 3 + 2; //coordernada y de fin
        iniEnd[1].second = (col / 3) * 3 + 2; //coordenada x de fin

        for(int i = iniEnd[0].first ; i <= iniEnd[1].first ; i++){ // Loop de filas

            for(int j = iniEnd[0].second ; j <= iniEnd[1].second ; j++){ //Check de columnas x fila
                
                if(board[i][j] == number) return false;
            }
        }


        return true;


    }

    bool backtrack(vector<vector<char>>& board){
        
            for( int row = 0 ; row < 9 ; row++){

                for(int col = 0 ; col < 9 ; col++){

                    if(board[row][col] != '.') continue;

                    for(int number = 1 ; number <= 9 ; number++){

                        char num = number + '0';
                        if(!isValidSquare(board, row, col, num)) continue;
                        board[row][col] = num;
                        if(backtrack(board)) return true;
                        board[row][col] = '.';
                    }
                    return false;
                }
            }
            
            return true;

        }

    void solveSudoku(vector<vector<char>>& board) {

        backtrack(board);

    }



};