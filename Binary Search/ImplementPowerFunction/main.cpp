int Solution::pow(int x, int n, int d) {
  if(n==0)return 1%d;
  long long base = x;
  long long ans=1;
  while(n>0){
      if((n%2)==1){
          ans = (ans*base)%d;
          n--;
      }else{
          base=(base*base)%d;
          n/=2;
      }
  }
  if(ans<0)ans=(ans+d)%d;
  return ans;
}
