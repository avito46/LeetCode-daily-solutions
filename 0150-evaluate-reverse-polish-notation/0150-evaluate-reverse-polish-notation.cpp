class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int>st;
        int result;
        for(int i=0;i<tokens.size();i++)
        {
            
            if(tokens[i]=="+" ||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
    
                if(tokens[i]=="+")
                {
                    result=a+b;
                }
                else if(tokens[i]=="-")
                {
                    result=a-b;
                }
                else if(tokens[i]=="*")
                {
                    result=a*b;
                }
                else if(tokens[i]=="/")
                {
                    result=a/b;
                }
                st.push(result);
            }
            else
            {
            int x=stoi(tokens[i]);    
            st.push(x);
        }
        }
        return st.top();
    }
};