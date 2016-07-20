vector<string> charmap = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generateHelpers(string &current, int index, string &digits, vector<string> &ans){
    if(index==digits.length()){
        ans.push_back(current);
        return;
    }
    
    int digit = digits[index]-'0';
    
    for(int i=0;i<charmap[digit].length();i++){
        current.push_back(charmap[digit][i]);
        generateHelpers(current,index+1,digits,ans);
        current.pop_back();
    }
    return;
}
vector<string> Solution::letterCombinations(string digits) {
    string current="";
    vector<string>ans;
    generateHelpers(current,0,digits,ans);
    return ans;
}

