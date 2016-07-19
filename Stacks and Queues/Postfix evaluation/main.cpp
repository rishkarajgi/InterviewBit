int operation(string op, string op1, string op2)
{
    int opp1 = stoi(op1);
    int opp2 = stoi(op2);
    switch(op[0]){
        case '+':
            return opp1+opp2;
            break;
        case '-':
            return opp1-opp2;
            break;
        case '*':
            return opp1*opp2;
            break;
        case '/':
            if(opp2==0)
                return -1;
            return opp1/opp2;
            break;
        default: return 0;
    }
}
bool isOptr(string a){
    return a=="+" || a=="-" || a=="*" || a=="/";
}
bool isOpnd(string str){
    bool flag = false;
    for(int i = 0;i<str.size();i++) {
		if(isdigit(str[i])) {
			flag=true;
		} else {
			flag=false;
		}
	}
	return flag;
}
int Solution::evalRPN(vector<string> &A) {
    if(A.size()==0)return -1;
    if(A.size()==1){
        if(isOpnd(A[0])){
            return stoi(A[0]);
        }else return -1;
    }
    stack<string>st;
    for(int i =0; i<A.size();i++){
       if(isOpnd(A[i])){
           st.push(A[i]);
       }else if(isOptr(A[i])){
           string op2 = st.top();
           st.pop();
           string op1 = st.top();
           st.pop();
           int result = operation(A[i],op1,op2);
           st.push(std::to_string(result));
       }
       else{
           return 0;
       }
    }
    return stoi(st.top());
}

