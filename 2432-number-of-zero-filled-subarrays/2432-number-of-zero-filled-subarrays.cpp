class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long flag=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                flag++;
                ans+=flag;
            }
          else
          {
            flag=0;
          }
            }
        return ans;
    }
};