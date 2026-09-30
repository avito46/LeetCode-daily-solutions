class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>s;
       for(int x:nums)
       {
        if(s.count(x)==1)
        {
            return true;
        }
        s.insert(x);
       }
       return false;
    }
};