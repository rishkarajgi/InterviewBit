string expandAroundCentre(string a, int c1, int c2){
    int l = c1, r = c2, n=a.size();
    while(l>=0 && r<=n-1 && a[l]==a[r]){
        l--;
        r++;
    }
    return a.substr(l+1,r-l-1);
}
string Solution::longestPalindrome(string A) {
    
    int size = A.size();
    if(size==0)return "";
    
    string longest;
    longest = A.substr(0,1);
    
    for(int i=0;i<A.size();i++){
        
        //even palindrome
        string p1 = expandAroundCentre(A,i,i);
        if(p1.size()>longest.size())
            longest = p1;
            
        string p2 = expandAroundCentre(A,i,i+1);
        if(p2.size()>longest.size())
            longest = p2;    
    }
    return longest;
}

