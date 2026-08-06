class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++)
        {
            vector<int>res(i+1,1);
            result.push_back(res);
            for(int j=1;j<i;j++)
            {
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        
        }
        return result;
    }
};