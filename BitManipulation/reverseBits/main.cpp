unsigned int Solution::reverse(unsigned int A) {
    unsigned int rev=0,m=31;
    while(A){
        if(A&1)
            rev=rev|1<<m;
        A>>=1;
        m--;
    }
    return rev;
}


