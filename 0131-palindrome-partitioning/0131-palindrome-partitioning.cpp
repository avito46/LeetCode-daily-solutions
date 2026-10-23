class Solution {
public:
void pal(string &s,int i,vector<string>current,vector<vector<string>>&ans)
{
    if(i==s.length())
    {
     ans.push_back(current);
     
    }
    for(int j=i;j<s.length();j++)
    {
    string c=s.substr(i,j-i+1);
    string p=s.substr(i,j-i+1);
    reverse(c.begin(),c.end());
    if(p==c)
    {
        current.push_back(p);
        pal(s,j+1,current,ans);
        current.pop_back();
    }
    }

}
    vector<vector<string>> partition(string s) {
        vector<string>current;
        vector<vector<string>>ans;
        pal(s,0,current,ans);
        return ans;

    }
};