class Solution {
public:
bool solve(vector<vector<char>>& board)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.')
            {
                for(char d='1';d<='9';d++)
                {
                    if(isValid(i,j,d,board))
                    {
                        board[i][j]=d;
                        if(solve(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j]='.';
                        }
                    }
                    
                }
                return false;
            }
        }
    }
    return true;
}
bool isValid(int i,int j,char d,vector<vector<char>>& board)
{
    for(int x=0;x<9;x++)
    {
        if(board[i][x] ==d)
        {
            return false;
        }
    }
    for(int y=0;y<9;y++)
    {
        if(board[y][j]==d)
        {
            return false;
        }
    }
    int sr=(i/3)*3;
    int sc=(j/3)*3;
    for(int x = sr; x < sr+3; x++)
    {
        for(int y=sc;y<sc+3;y++)
        {
            if(board[x][y]==d)
            {
                return false;
            }
        }
    }
    return true;
}

   void solveSudoku(vector<vector<char>>& board) {
    solve(board);   
     }
};