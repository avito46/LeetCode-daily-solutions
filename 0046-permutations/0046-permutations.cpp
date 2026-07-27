class Solution {
public:
void solve(vector<int>&curr, vector<int>&rem, vector<vector<int>>&result)
{
    if(rem.size()==0)
    {
        result.push_back(curr);
        return;   
    }
    for(int i=0;i<rem.size();i++)
    {
        int val=rem[i];
        curr.push_back(val);
        rem.erase(rem.begin()+i);
        solve(curr,rem,result);
        curr.pop_back();
        rem.insert(rem.begin()+i,val);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>result;
        vector<int>rem=nums;
        solve(curr,rem,result);
        return result;
    }
};