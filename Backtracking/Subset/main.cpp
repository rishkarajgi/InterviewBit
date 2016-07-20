 void generateSubsets(vector<int> &S, int index, vector<int> &current, vector<vector<int> > &result) {
            if (index >= S.size()) {
                result.push_back(current);
                for(int i=0;i<current.size();i++){
                    //cout<<current[i]<<" ";
                }
                //cout<<endl;
                return;
            }
            // Ignore the current index.
            generateSubsets(S, index + 1, current, result);

            // Include the current index. 
            current.push_back(S[index]);
            generateSubsets(S, index + 1, current, result);
            current.pop_back();
        }
vector<vector<int> > Solution::subsets(vector<int> &S) {

            vector<vector<int> > result; 
            vector<int> current;
            sort(S.begin(), S.end());
            generateSubsets(S, 0, current, result);
            sort(result.begin(), result.end());
            return result;
}


