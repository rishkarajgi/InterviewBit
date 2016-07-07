int Solution::lengthOfLastWord(const string &A) {
    
    std::string value=A;
    value.erase(std::find_if(value.rbegin(), value.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), value.end());
    vector<int>wordlen;
    int count=0;
    for(int i=0; value[i]!='\0';i++){
        if(value[i]!=' '){
            count++;
        }
        if(value[i]==' '){
            wordlen.push_back(count);
            count=0;
        }
    }
    wordlen.push_back(count);
    return wordlen[wordlen.size()-1];
}

