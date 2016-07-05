void Solution::setZeroes(vector<vector<int> > &A) {
    
    int rowSize = A.size();
    int colSize = A[0].size();
    if(rowSize==0 || colSize==0) return;
    bool hasRowZero=false;
    bool hasColZero=false;
    
    //first we check if first row has zero
    for(int j = 0 ; j < colSize ; ++j){
        if(A[0][j]==0){
            hasRowZero = true;
            break;
        }
    }
    
    //then we check if first col has zero
    for(int i = 0 ; i < rowSize ; ++i){
        if(A[i][0]==0){
        hasColZero = true;
        break;
        }
    }
    
    //then we set zeros except for first row and col
    for(int i = 1 ; i < rowSize ; ++i){
        for(int j = 1 ; j < colSize ; ++j){
            if(A[i][j]==0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    
    //then set zero if corresponding first row and column are zero
    
    for(int i = 1 ; i < rowSize ; ++i){
        for(int j = 1 ; j < colSize ; ++j){
            if(A[i][0] == 0 || A[0][j]==0){
                A[i][j] = 0;
            }
        }
    }
    if(hasRowZero){
        for(int j = 0 ; j < colSize ; ++j){
            A[0][j] = 0;
        }
    }
    if(hasColZero){
        for(int i = 0 ; i < rowSize ; ++i){
            A[i][0] = 0;
        }
    }
    
}

