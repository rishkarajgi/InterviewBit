#define MAX 2147483647
int Solution::removeDuplicates(vector<int> &A) {
    if (A.size() == 0 || A.size() == 1) return A.size();
        
    int n = A.size(),count=0,ptr1=0,ptr2=1;
    while(ptr2<n){
        if(A[ptr1]==A[ptr2]){
            count++;
            A[ptr2]=MAX;
            ptr2++;
        }else{
            ptr1=ptr2;
            ptr2++;
        }
    }
    sort(A.begin(),A.end());
    for(int i=0;i<count;i++){
        A.pop_back();
    }
    int res = n - count;
    return res;
}


