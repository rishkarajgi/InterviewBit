int Solution::braces(string A) {
        stack<char> exp;
    int N=A.size();
    for(int i=0;i<N;i++){
        if(A[i]==')'){
            int number=0;
            while(exp.top()!='('){
                exp.pop();
                number++;
            }
            exp.pop();
            if(number<2)return 1;
        }else{
            exp.push(A[i]);
        }
    }
    
    bool is = true;
        while(exp.size()) {
            if(exp.top() == '(' || exp.top() == ')') {
                    is = false;
                    break;
            }
            exp.pop();
        }

        if(!is)
            return 1;
        return 0;

}

