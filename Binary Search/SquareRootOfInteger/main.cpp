double sqrtr(double number){
    double error = 0.00001;
    double s = number;
    while((s-number/s)>error){
        s = (s + number/s)/2;
    }
    return s;
}

int Solution::sqrt(int A) {
    
 return (int)sqrtr((double)A);
 
}

