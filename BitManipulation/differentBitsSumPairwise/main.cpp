//O(N*N)
int count(long long int num){
    int cnt=0;
    for(int i=0;i<32;i++){
        if((num>>i)&1==1)
            cnt++;
    }
    return cnt;
}
int xorr(long long int a, long long int b){
    
    long long int c = a ^ b;
    return count(c);
}

int Solution::cntBits(vector<int> &A) {
    
    for(int i = 0 ; i < A.size() ; i++){
        for(int j = 0 ; j < A.size() ; j++){
            if(i==j)continue;
            sum+=xorr(A[i],A[j]);
        }
    }
    return sum;
    
}


//O(N*32)
int Solution::cntBits(vector<int> &A) {
    
    int ans = 0;  // Initialize result
    int n = A.size();
    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        int count = 0;
        for (int j = 0; j < n; j++)
            if ( (A[j] & (1 << i)) )
                count++;
 
        // Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2);
    }
 
    return ans;
    
}


