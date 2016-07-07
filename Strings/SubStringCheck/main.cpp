int Solution::strStr(const string &haystack, const string &needle) {
    if(haystack.length()==0 || needle.length()==0 || needle.length()>haystack.length())return -1;

    int M = needle.length();
    int N = haystack.length();
    int lps[M];
    
    if(M==1 && N==1 && needle[0]==haystack[0])return 0;
    int len = 0;  // length of the previous longest prefix suffix
    int i;
 
    lps[0] = 0; // lps[0] is always 0
    i = 1;
 
    // the loop calculates lps[i] for i = 1 to M-1
    while (i < M)
    {
       if (needle[i] == needle[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if (len != 0)
         {
           // This is tricky. Consider the example 
           // AAACAAAA and i = 7.
           len = lps[len-1];
 
           // Also, note that we do not increment i here
         }
         else // if (len == 0)
         {
           lps[i] = 0;
           i++;
         }
       }
    }
    int j;
    i=0;
    j=0;
    while(i<N){
        if(j==M){
            return i-j;
        }if(haystack[i]==needle[j]){
            i++;
            j++;
        }else if(i<N && needle[j]!=haystack[i]){
            if(j!=0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
    }
    return -1;
}

