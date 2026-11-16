class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
         int m=arr.size();
        int n=arr[0].size();
        int start=0;
        int end=m*n-1;
        while(start <=end)
        {
            int mid=start+(end-start)/2;
            int row=mid/n;
            int col=mid%n;
            if(arr[row][col] == target)
            {
                return true;
            }
            if(arr[row][col]<target)
            {
                start=mid+1;
            }
            else if(arr[row][col]>target)
            {
                end=mid-1;
            }
        }
        return false;
    }
};