vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    long double tpos=0,gpos=0,tsum=0,gsum=0,flag=0;
    vector<int>final;
    
    if(A.size()==0)
    return A;
    if(A.size()==1 && A[gpos]<0)
    return final;
    if(A.size()==1)
    return A;
    
    for(int i=0;i<A.size();i++){

        if(A[gpos]<0)
            gpos++;
        if(A[i]<0){

            if(tsum>gsum && gsum==0){
                gsum = tsum;
                tsum = 0;
                tpos=i+1;
                continue;
            }
            else if(tsum>gsum && gsum>0)
            {
                gsum = tsum;
                gpos = tpos;
                tpos = i+1;
                tsum = 0;
                continue;
            }
            tsum=0;
            tpos = i+1;
            continue;
        }
   
        tsum+=A[i];
        
    }
    if(tsum>gsum)
    {
        gsum = tsum;
        gpos = tpos;
    }
    
    
    for(int i=gpos; i<A.size();i++)
    {
        if(A[i]<0)
        break;
        final.push_back(A[i]);
    }
    return final;
    
}

