class Solution {
public:
    bool check(vector<int>& arr) {
        int n=arr.size();
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
         if(arr[i]>arr[i+1])
         {
            flag++;
         }}
         if(arr[n-1]>arr[0])
         {
            flag++;
         }
         
        
       return flag<=1;

    }
};