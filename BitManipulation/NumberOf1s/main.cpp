int Solution::numSetBits(unsigned int A) {
    if(A==0)return 0;
    int count=0;
    while(A!=0){
        if(A&1){
            count++;
        }
        A=A>>1;
    }
    return count;
}


