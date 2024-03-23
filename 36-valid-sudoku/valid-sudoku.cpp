class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char sq = board.at(i).at(j);
                if (sq != '.' && !isValid(board, i, j, sq))
                    return false;
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = col + 1; i < 9; i++)
            if (board.at(row).at(i) == num)
                return false;

        for (int i = row + 1; i < 9; i++)
            if (board.at(i).at(col) == num)
                return false;

        int x = row - row % 3, y = col - col % 3;

        for (int i = x; i < x + 3; i++) {
            for (int j = y; j < y + 3; j++) {
                if (board.at(i).at(j) == num && !(i == row || j == col))
                    return false;
            }
        }

        return true;
    }
};