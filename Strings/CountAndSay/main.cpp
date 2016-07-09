string getNextSeq(string s){
    int size = s.size();
    string result="";
    if(size==1){
        result+=std::to_string(1)+s[0];
        return result;
    }
    int count=1,i;
    for(i=1;i<size;i++){
        int sec = s[i]-'0';
        int fir = s[i-1]-'0';
        if(fir==sec){
            count++;
        }else{
            result+=std::to_string(count)+s[i-1];
            count=1;
        }
    }
    result+=std::to_string(count)+s[i-1];
    return result;
}
string Solution::countAndSay(int A) {
    if(A==0)return "";
    string result = "1";
    while(A>1){
        result = getNextSeq(result);
        A--;
    }
    return result;
    
}

