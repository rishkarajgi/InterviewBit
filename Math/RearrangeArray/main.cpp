
void Solution::arrange(vector<int> &A) {
    if(A.size()<2)return;
    vector<int>copy(A.begin(),A.end());
    for(int i = 0 ; i < A.size() ; i++){
            A[i] = copy[copy[i]];
    }
}

