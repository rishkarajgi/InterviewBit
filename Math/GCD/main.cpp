void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int Solution::gcd(int m, int n) {
    
    if(m<n)
        swap(m,n);
    if(n==0)
        return m;
    gcd(m%n,n);
    
    
    
}

