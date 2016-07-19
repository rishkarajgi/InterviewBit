vector<int> Solution::prevSmaller(vector<int> &A) {
    if(A.size()==0)return A;
    
    stack<int>store;
    for(int i=0;i<A.size();i++){
        while(!store.empty() && store.top()>=A[i]){
            store.pop();
        }
        if(store.empty()){
            store.push(A[i]);
            A[i]=-1;
        }else{
            int temp = A[i];
            A[i] = store.top();
            //store.pop();
            store.push(temp);
        }
    }
    return A;
}

