vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    if(A.size()<B.size()){
        intersect(B,A);
    }
    int ptr2=0,ptr1=0;
    vector<int>v;
    int m=A.size(),n=B.size();
    while(ptr2<n && ptr1<m){
    if(A[ptr1]==B[ptr2]){
        v.push_back(A[ptr1]);
        ptr1++;
        ptr2++;
    }
    if(A[ptr1]<B[ptr2]){
        ptr1++;
    }
    if(A[ptr1]>B[ptr2]){
        ptr2++;
    }
}
    return v;
}




