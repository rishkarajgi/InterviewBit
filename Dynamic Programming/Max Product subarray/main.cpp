int max(int a, int b){
    if(a>b)return a;
    else return b;
}
int min(int a, int b){
    if(a<b)return a;
    else return b;
}
int Solution::maxProduct(const vector<int> &A) {
    
    int n = A.size();
    vector<int> maxarray(n);
    vector<int> minarray(n);
    maxarray[0] = A[0];
    minarray[0] = A[0];
    int result = A[0];
    for(int i=1;i<n;i++){
        if(A[i]>0){
            maxarray[i] = max(A[i],maxarray[i-1]*A[i]);
            minarray[i] = min(A[i],minarray[i-1]*A[i]);
        }else{
            maxarray[i] = max(A[i],minarray[i-1]*A[i]);
            minarray[i] = min(A[i],maxarray[i-1]*A[i]);
        }
        result = max(result,maxarray[i]);
    }
    
    return result;
}

