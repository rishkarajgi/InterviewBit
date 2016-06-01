// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    
    
    int distance = 0;
    int i=0;
    int j=0;
    int caldistance=0;
    int x1,x2,y1,y2;
    if(X.size()==1 && Y.size()==1)
    return 0;
    for(int i=0; i< X.size()-1; i++)
    {
        
        caldistance = 0;
        int distancex = (abs(X[i+1] - X[i]));
        int distancey = (abs(Y[i+1] - Y[i]));
        
        caldistance = max(distancex,distancey);
        distance+=caldistance;
    }
    return distance;
}
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else b;
}



