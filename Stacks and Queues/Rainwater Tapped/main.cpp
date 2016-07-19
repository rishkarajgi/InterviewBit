int max(int a, int b){
    if(a>b)return a;
    else return b;
}
int min(int a, int b){
    if(a<b)return a;
    else return b;
}
int Solution::trap(const vector<int> &A) {
    if(A.size()==0 || A.size()==1) return 0;
    int n = A.size();
    int left[n];
    int right[n];
    
    //compute left heights
    left[0] = A[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],A[i]);
    }
    
    right[n-1] = A[n-1];
    for(int i=n-2; i>=0; i--){
        right[i] = max(right[i+1],A[i]);
    }
    
    int water = 0;
    for(int i=0;i<n;i++){
        water += min(left[i],right[i]) - A[i];
    }
    
    return water;
    
}


