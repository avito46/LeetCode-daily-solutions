class Solution {
public:
    bool isAlphaNum(char ch)
    {
        if(ch>='0'&&ch<='9' || (tolower(ch)>='a' && tolower(ch)<='z'))
            {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int st=0;
        int en=s.length()-1;
        while(st<=en)
        {
            if(!isAlphaNum(s[st]))
            {
              st++;
              continue;
            }
            if(!isAlphaNum(s[en]))
            {
                en--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[en]))
            {
                return false;
            }
            st++;
            en--;
        }
          return true;
    }
};