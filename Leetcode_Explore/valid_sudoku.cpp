class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int[9]> rows;
        unordered_map<int,int[9]> cols;
        unordered_map<int,int[9]> squares;
        for(int i = 0; i<9 ; i++){
            for(int j = 0 ; j<9 ; j++){
                cout<<board[i][j]<<endl;
                if(board[i][j] == '.')
                    continue;
                int val = board[i][j] - '1';
                if(rows[i][val] || cols[j][val] || squares[(3*(i/3) + j/3)][val])
                    return false;
                rows[i][val]++;
                cols[j][val]++;
                squares[3*(i/3) + j/3][val]++;
            }
        }
        return true;
    }
};