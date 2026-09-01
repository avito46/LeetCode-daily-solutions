class Solution {
public:
void backtrack(string current, int open, int close, int n, vector<string>& result)
{
    if(open==n && close==n)
    {
        result.push_back(current);
        return;
    }
    if(open<n)
    {
        current.push_back('(');
        backtrack(current,open+1,close,n,result);
        current.pop_back();
        
    }
    if(close<open)
    {
        current.push_back(')');
        backtrack(current,open,close+1,n,result);
        current.pop_back();
    
    }
}
    vector<string> generateParenthesis(int n) {
        int close=0;
        int open=0;
        string current;
        vector<string> result;
    backtrack(current,open, close, n,result);
    return result;
    }
};