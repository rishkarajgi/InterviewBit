int Solution::divide(int dividend, int divisor) {
    
    long long m = divisor, n = dividend;
    int sign = n<0 ^ m<0?-1:1;
    m=abs(m),n=abs(n);
    
    long long q=0;
    
    for(long long t=0, i=31;i>=0;i--){
        if(t+(m<<i)<=n)
            t+=m<<i,q|=1LL<<i;
    }
    if(sign<0) q=-q;
    
    return q>=INT_MAX || q<INT_MIN ? INT_MAX:q;
    
    
}

