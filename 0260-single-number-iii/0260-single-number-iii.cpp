class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
         unordered_map<int,int> flag;
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            flag[nums[i]]++;
        }
    for(int i=0;i<n;i++)
            {
                if(flag[nums[i]]==1)
                {
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};