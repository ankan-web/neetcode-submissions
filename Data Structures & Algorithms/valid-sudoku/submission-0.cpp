class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
                if(board[i][j] == '.') continue;
                char num = board[i][j];

                int boxIdx = (i/3)*3 + (j/3);
                if(row[i].count(num) || col[j].count(num) || box[boxIdx].count(num)) return false;

                row[i].insert(num);
                col[j].insert(num);
                box[boxIdx].insert(num);

            }
        }

        return true;
    }
};
