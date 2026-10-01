class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
    int m=arr.size();
    int n=arr[0].size();
    vector<int>r(m);
    vector<int>c(n);
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]==0)
        {
            r[i]=-1;
            c[j]=-1;
        }
       
    }
   }
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
         if(r[i]==-1 || c[j]==-1)
        {
            arr[i][j]=0;
        }

    }
   }}
};