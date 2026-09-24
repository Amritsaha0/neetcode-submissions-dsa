class Solution {
public:
    bool is_check(vector<vector<char>>& board, int i, int j, char k) {
        for(int p = 0; p < board[i].size(); p++) {
            if(board[i][p] == k) {
                return false;
            }
        }

        for(int q = 0; q < board.size(); q++) {
            if(board[q][j] == k) {
                return false;
            }
        }


        int row = (i / 3) * 3;
        int col = (j / 3) * 3;

        for(int p = row; p < row + 3; p++) {
            for(int q = col; q < col + 3; q++) {
                if(board[p][q] == k) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.')
                    continue;

                char k = board[i][j];

                board[i][j] = '.';

                if(!is_check(board, i, j, k)) {
                    return false;
                }

                board[i][j] = k;
            }
        }

        return true;
    }
};