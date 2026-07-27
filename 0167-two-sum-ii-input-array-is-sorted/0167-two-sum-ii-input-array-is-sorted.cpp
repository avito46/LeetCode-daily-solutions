class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        for(int i=0;i<n;i++)
        {
            int sum=nums[s]+nums[e];
            if(sum==target)
            {
                return {s+1,e+1};
            }
            else if(target<sum)
            {
                e--;
            }
            else{
                s++;
            }
        }
        return {};
    }
};