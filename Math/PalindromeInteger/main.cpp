bool Solution::isPalindrome(int x) {
    if(x<0)return false;
    if(x<10)return true;
    std::vector<int> numbers;
while(x>0)
{
   numbers.push_back(x%10);
   x/=10;
}
int i = 0;
int j = numbers.size()-1;
while(i<j){
    if(numbers[i]==numbers[j]){
        i++;
        j--;
    }else{
        return false;
    }
}
return true;

}

