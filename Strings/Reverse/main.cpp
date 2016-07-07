void Solution::reverseWords(string &A) {
    if(A.length()==0)return;
    std::string myText = A;
    std::istringstream iss(myText);
    std::string token;
    vector<std::string>words;
    while (std::getline(iss, token, ' '))
    {
        if(token==" " || token=="")continue;
        words.push_back(token);

    }
    A="";
    if(words.size()==1){
        A+=words[0];
        return;
    }
    std::reverse(words.begin(),words.end());
    
    for(int i =0;i<words.size()-1;i++){
        A+=words[i]+" ";
    }
    A+=words[words.size()-1];
    return;
}

