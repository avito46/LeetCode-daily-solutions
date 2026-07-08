class Solution {
public:
void combo(vector<int>& candidates,int start,int rem,vector<int>&current,vector<vector<int>>& answer)
{
if (rem == 0) {
    answer.push_back(current);
    return;
}
if(rem<0)
{
    return;
}
 for(int i=start;i<candidates.size();i++)
 {
    current.push_back(candidates[i]);
    combo(candidates,i,rem-candidates[i],current,answer);
    {
        current.pop_back();
    }
 }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        vector<vector<int>> answer;
   combo(candidates,0,target,current,answer);
   return answer;

    }
};