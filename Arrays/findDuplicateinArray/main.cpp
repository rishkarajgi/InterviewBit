int Solution::repeatedNumber(const vector<int> &A) {
   
   std::vector<int> frequency(A.size()-1,0);
   
   for(int i = 0 ; i < A.size() ; i++)
   {
       if(++frequency[A[i]-1] > 1){
           return A[i];
       }
   }
   
   
    
}
