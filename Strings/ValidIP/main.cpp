bool isValid(string a){
    if(a.size()>1 && a[0]=='0')return false;
    if(stoi(a)>=0 && stoi(a)<=255) return true;
    else return false;
}
vector<string> Solution::restoreIpAddresses(string A) {
    vector<string>result;
    if(A.size()<4 || A.size()>12)return result;
    
    for(int i=1;i<4;i++){
        string first = A.substr(0,i);
        if(!isValid(first))continue;
        for(int j=1;i+j<A.size() && j<4;j++){
            string second = A.substr(i,j);
            if(!isValid(second))continue;
            for(int k =1;i+j+k<A.size()&&k<4;k++){
                string third = A.substr(i+j,k);
                string fourth = A.substr(i+j+k);
                if(isValid(third) && isValid(fourth)){
                    string cur = first + "." + second + "." + third + "." + fourth;
                    result.push_back(cur);
                }
            }
        }
    }
    return result;
}

