int Solution::threeSumClosest(vector<int> &A, int target) {
    sort(A.begin(),A.end());
    int bestsum=1000000000, sum=0;
    int n = A.size();
    for(int i=0;i<n-2;i++){
        int ptr1 = i+1, ptr2 = n-1;
        while(ptr1<ptr2){
            sum = A[i] + A[ptr1] + A[ptr2];
            if(abs(target-sum) < abs(target-bestsum)){
                bestsum = sum;
            }
            if(sum>target){
                ptr2--;
            }
            else{
                ptr1++;
            }
        }
    }
    return bestsum;
}

