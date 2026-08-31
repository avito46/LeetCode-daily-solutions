class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false;
        }
        int x=log(n)/log(2);
       if(pow(2,x)==n)
       {
        return true;
       } 
       return false;
    }
};