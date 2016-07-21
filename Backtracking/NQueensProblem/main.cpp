vector<string> solTosols(const vector<int>&solution){
    int n = solution.size();
    vector<string>sols(n);
    for(int i=0;i<n;i++){
        sols[i]=string(n,'.');
        sols[i][solution[i]] = 'Q';
    }
    return sols;
}
bool isAvailable(int i, int j, const vector<int>&solution){
    for(int k=0;k<i;k++){
        if(j==solution[k] || i+j==k+solution[k] || i-j==k-solution[k])return false;
    }
    return true;
}
void rsolveNQueens(int row, vector<int>&solution, vector<vector<string>> &solutions){
    int n = solution.size();
    if(row==n){
        solutions.push_back(solTosols(solution));
        return;
    }
    
    for(int j=0;j<n;j++){
        if(isAvailable(row,j,solution)){
            solution[row]=j;
            rsolveNQueens(row+1,solution,solutions);
            
            
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int A) {
    vector<int>solution(A);
    vector<vector<string>> solutions;
    rsolveNQueens(0,solution,solutions);
    return solutions;
}

