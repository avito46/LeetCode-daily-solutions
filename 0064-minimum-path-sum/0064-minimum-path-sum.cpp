class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                {
                 arr[0][0] = grid[0][0];
                }
               else if(i==0 && j>0)
               {
                 arr[0][j] = grid[0][j] + arr[0][j-1];
               }
               else if(j==0 && i>0)
               {
                arr[i][0] = grid[i][0] + arr[i-1][0];
                }
                else
                {
                    arr[i][j]=grid[i][j]+min(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        return arr[n-1][m-1];
    }
};