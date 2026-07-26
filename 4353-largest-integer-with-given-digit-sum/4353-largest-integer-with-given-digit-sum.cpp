class Solution {
public:
    int largestInteger(int n, int s) {
        string result;
        if(s==0)
        {
            return 0;
        }
        if(s>9*n)
        {
            return -1;
        }
        while(s>0)
        {
            int digit=min(s,9);
            result.push_back('0'+digit);
            s=s-digit;
        }
        result.append(n-result.size(),'0');
        return stoi(result);
    }
};