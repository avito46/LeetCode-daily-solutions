class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int rem;
        vector<int>target(nums.size());
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
        for(int temp=nums[i];temp!=0;temp/=10)
        {
            rem=temp%10;
            sum+=rem;
        }
        v.push_back({sum,nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
           target[v[i][2]]=i;
        }
        vector<bool>vis(nums.size(),false);
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i])
            continue;
            int j=i;
            int L=0;
            while(vis[j]!=true)
            {
            vis[j]=true;
            j=target[j];
            L=L+1;
            }
            s+=L-1;
        }
        return s;
    }
};