int Solution::singleNumber(const vector<int> &A) {
    if(A.size()==0)return 0;
    if(A.size()==1)return A[0];
   int result=0;
   int n = A.size();
   for(int i=0;i<n;i++){
       result^=A[i];
   }
   return result;
}


