int min(int a, int b){
    if(a<b)return a;
    else return b;
}
string LCP(string a, string b){
    string lcp="";
    int size = min((int)a.size(),(int)b.size());
    for(int i =0;i<size;i++){
        if(a[i]==b[i]){
            lcp+=a[i];
        }else{
            break;
        }
    }
    return lcp;
}
string Solution::longestCommonPrefix(vector<string> &A) {
    
    if(A.size()==0)return "";
    if(A.size()==1)return A[0];
    
    string lcp = LCP(A[0],A[1]);
    if(lcp.size()==0)return "";
    int size = A.size();
    int i=2;
    while(i<size){
        lcp =  LCP(A[i],lcp);
        if(lcp.size()==0)return "";
        i++;
    }
    return lcp;
    
}

