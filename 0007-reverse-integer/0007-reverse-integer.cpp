class Solution {
public:
    int reverse(int x) {
        int n=x;
     long rev=0 ;
     for(int temp=x;temp!=0;temp/=10)
     {
        int rem=temp%10;
        rev=rev*10+rem;
        if(rev>INT_MAX||rev<INT_MIN)
    
    return 0; }   
     return (int)rev;
    }
};