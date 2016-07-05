bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
vector<int> Solution::primesum(int A) {
    
    vector<int>sum;
    for(int i = 2 ; i <=A ; i++){
        if(isPrime(i) && isPrime(A-i)){
            sum.push_back(i);
            sum.push_back(A-i);
            break;
        }
    }
    return sum;
}

