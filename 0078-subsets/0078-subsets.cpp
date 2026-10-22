class Solution {
public:
void solve(vector<int>& nums, int i, vector<int>& current, vector<vector<int>>& ans)
{
    if(i==nums.size())
    {
        ans.push_back(current);
    }
    if(i<nums.size())
    {
        current.push_back(nums[i]);
        solve(nums,i+1,current,ans);
        current.pop_back();
        solve(nums,i+1,current,ans);
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
        vector<vector<int>>ans;
        solve(nums,0,current,ans);
        return ans;
    }
};