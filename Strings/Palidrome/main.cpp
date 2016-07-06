int Solution::isPalindrome(string A) {
  
  //cout<<"length="<<A.length()<<endl;
  if(A.length()<2)return 1;
  vector<char>string;
  for(int i = 0 ; A[i]!='\0';i++){
      if(isalpha(A[i])){
          //cout<<A[i]<<endl;
          string.push_back(tolower(A[i]));
      }
  }
    if(A.length()>0 && string.size()==0)return 1;
  int i=0,flag=0;
  int j=string.size()-1;

  while(i<j){
    //   cout<<"i="<<i<<endl;
    //   cout<<"j="<<j<<endl;
      if(string[i]==string[j]){
          flag=1;
          i++;
          j--;
          
      }else{
          flag=0;
          i++;
          j--;
          
      }
  }
  return flag;
}

