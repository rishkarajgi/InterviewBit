int Solution::maximumGap(const vector<int> &A) {
   
   if(A.size()<2)
    return 0;
   
   int difference = 0;
   std::vector<int>num(A);
   std::sort(num.begin(), num.end());
   
   for(int i = 1 ; i < num.size(); i++){
        if((num[i]-num[i-1])>difference){
            difference = num[i]-num[i-1];
        }
   }
   return difference;
}

