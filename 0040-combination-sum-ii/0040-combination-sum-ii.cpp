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
    if(i>start && candidates[i]==candidates[i-1])
    {
        continue;
    }
    current.push_back(candidates[i]);
    
    combo(candidates,i+1,rem-candidates[i],current,answer);
    {
        current.pop_back();
    }
 }
}
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) 
               {
            
                vector<vector<int>> answer;
                vector<int> current;
                sort(candidates.begin(),candidates.end());
                combo(candidates,0,target,current,answer);
                return answer;

    }
};