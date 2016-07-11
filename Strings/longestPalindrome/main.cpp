string longest;
int lengthOf(string a){
    return a.size();
}
bool isPalindrome(string s){
    if(s.empty())
        return false;
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    if(lengthOf(s)>lengthOf(longest)){
        longest="";
        longest = s;
    }
    
    return true;
}
string Solution::longestPalindrome(string A) {
    
    int i,j;
    bool temp;
    if(A.size()==0)return "";
    longest = A.substr(0, 1);
    for(i = 0 ; i < A.length()-1; i++){
        
        for(j = i+1;j<A.length();j++){
            
            string temp = A.substr(i,j-i);
            
            isPalindrome(temp);
            if(isPalindrome(temp) && lengthOf(temp)>lengthOf(longest)){
                longest="";
                longest = A.substr(i,j);
                
            }
        }
        string temp = A.substr(i,j-i);
        
        temp = isPalindrome(temp);
        if(isPalindrome(temp) && lengthOf(temp)>lengthOf(longest)){
            longest="";
            longest = A.substr(i,j);
           
        }
    }
    
    return longest;
}

