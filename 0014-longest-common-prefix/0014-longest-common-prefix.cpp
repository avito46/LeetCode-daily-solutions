class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sh=strs[0];
        for(int i=0;i<sh.length();i++)
        {
            for(string &s:strs)
            {
                if(s[i]!=sh[i])
                {
                   return sh.substr(0,i);
                }
            }
        }
        return sh;
    }
};