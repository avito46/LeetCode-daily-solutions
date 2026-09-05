class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int,int>> q;
    int freshCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 2) {
                q.push({i, j});
            } else if (grid[i][j] == 1) {
                freshCount++;
            }
        }
    }

    int minutes = 0;

    // Step 2: BFS, round by round
    while (!q.empty()) {
        int size = q.size();

        for (int k = 0; k < size; k++) {
            pair<int,int> curr = q.front();
            q.pop();
            int row = curr.first;
            int col = curr.second;

         if(row-1>=0 && grid[row-1][col]==1)
         {
            grid[row-1][col]=2;
            freshCount--;
            q.push({row-1,col});
         }
         if(row+1< rows&& grid[row+1][col]==1)
         {
            grid[row+1][col]=2;
            freshCount--;
            q.push({row+1,col});
         }
         if (col - 1 >= 0 && grid[row][col-1] == 1) {
            grid[row][col-1] = 2;
            freshCount--;
            q.push({row,col-1});
         }
          if (col +1 < cols && grid[row][col+1] == 1) {
            grid[row][col+1] = 2;
            freshCount--;
            q.push({row,col+1});
         }
        }
        if(!q.empty())
        {
        minutes++;
    }
    }

 if(freshCount==0)
 {
    return minutes;
 }
 return -1;

    }
};