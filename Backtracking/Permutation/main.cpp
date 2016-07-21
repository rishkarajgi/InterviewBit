
  void rpermute(vector<int> &num, int start, vector<vector<int> > &result) {
        if (start == num.size() - 1) {
            result.push_back(num);
            return;
        } 
        for (int i = start; i < num.size(); i++) {
            swap(num[start], num[i]);
            rpermute(num, start + 1, result);
            swap(num[start], num[i]);
        }
    }

vector<vector<int> > Solution::permute(vector<int> &num) {
    vector<vector<int> > result;
        if (num.size() == 0)
            return result;
        sort(num.begin(), num.end());
        rpermute(num, 0, result);
        return result;
}
