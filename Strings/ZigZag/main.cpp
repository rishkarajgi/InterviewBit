string Solution::convert(string A, int B) {
    
    if(A.size()==0)return "";
    if(B==0 || B==1)return A;
    if(B>A.size())return A;
    vector<string>parts(B);
    int rowIndex = 0;
    bool increasing = true;
    for(int i = 0 ; i < A.size(); i++){
        if(rowIndex==B-1){
            increasing = false;
            parts[rowIndex--]+=A[i];
        }else if(rowIndex==0){
            increasing = true;
            parts[rowIndex++]+=A[i];
        }else if(increasing){
            parts[rowIndex++]+=A[i];
        }else if(!increasing){
            parts[rowIndex--]+=A[i];
        }
    }
    string result="";
    for(int i=0;i<parts.size();i++){
        result+=parts[i];
    }
    return result;
}


