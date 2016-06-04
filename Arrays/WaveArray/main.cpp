int partition(vector<int>& theList, int start, int end);
int quickSort(vector<int>& theList, int start, int end);
void swap(int &a, int &b);
vector<int> Solution::wave(vector<int> &A) {
    
    int size = A.size();
    int j = size-1;
    
    if(size==0 || size == 1)return A;
 
    quickSort(A, 0, j);
    for(int i = 0;i < size; i+=2){
        if(i==size-1)break;
        swap(A[i], A[i+1]);
    }
    
    return A;
 

}
void swap(int &a, int &b){
    int temp=0;
    temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& theList, int start, int end)
{
	int pivot = theList[end];                                       
    int bottom = start-1;                                                   
    int top = end;                                                           

    bool notdone = true;
    while (notdone)
	{
        while (notdone)
	{
            bottom += 1;                  

            if (bottom == top)   
	    {
                notdone = false;                        
                break;
	    }
            if (theList[bottom] > pivot)   
	     {
                theList[top] = theList[bottom];       
                break;
	     }
	}  
	while (notdone)
	{
            top = top-1;                      
            
            if (top == bottom) 
	    {
                notdone = false;                      
                break;
	     }
            if (theList[top] < pivot)
	    {   
                theList[bottom] = theList[top];
		break;
	     }      
	}
    }
    theList[top] = pivot;                          
    return top;
}

//Actual function call within program
int quickSort(vector<int>& theList, int start, int end)
{
	if (start < end)     
	{
             int split = partition(theList, start, end);   //recursion   
             quickSort(theList, start, split-1);         
             quickSort(theList, split+1, end); 
	}
        else
	{
             return 0;
	}
}
