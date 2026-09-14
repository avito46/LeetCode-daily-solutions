class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        vector<int>count(n+1);
        int dup,mis;
        for(int i=0;i<n;i++)
        {
            count[nums[i]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            if(count[i]==2)
            {
                dup=i;
            }
            if(count[i]==0)
            {
             mis=i;
            }
        }
        ans.push_back(dup);
        ans.push_back(mis);
        return ans;
    }
};