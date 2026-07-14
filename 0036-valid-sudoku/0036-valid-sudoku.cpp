class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> b(9);
        vector<unordered_set<char>> c(9);
        vector<unordered_set<char>> r(9);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                int k=(i/3)*3+(j/3);
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(r[i].find(board[i][j])!=r[i].end() || c[j].find(board[i][j])!=c[j].end() || b[k].find(board[i][j])!=b[k].end())
                {
                    return false;
                }
                r[i].insert(board[i][j]);
                c[j].insert(board[i][j]);
                b[k].insert(board[i][j]);
            }
        }
        return true;
    }
};