class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       int j=0;
       vector<string>res;
       for(int i=1;i<=n;i++)
       {
        if(j==target.size())
        {
            break;
        }
        if(i==target[j])
        {
          res.push_back("Push");
          j++;
        }
        else{
            res.push_back("Push");
            res.push_back("Pop");
        }
       } 
       return res;
    }
};