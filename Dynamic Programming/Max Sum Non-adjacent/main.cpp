int V[1000][2];
int Solution::adjacent(vector<vector<int> > &V) {
    assert(V.size() == 2);
    int N = V[0].size();
    int MAXSUM[N + 1][2];
    memset(MAXSUM, 0, sizeof(MAXSUM));
    int ele = max(V[0][0], V[1][0]);
    MAXSUM[0][1] = ele;
    for (int i = 1; i < N; i++) {
        int cur_element = max(V[0][i], V[1][i]);
        MAXSUM[i][0] = max(MAXSUM[i-1][0], MAXSUM[i-1][1]);
        MAXSUM[i][1] = cur_element + MAXSUM[i-1][0];
    }
    for(int i=0;i<N;i++){
        cout<<MAXSUM[0][i]<<endl;
        cout<<MAXSUM[1][i]<<endl;
    }
    return max(MAXSUM[N-1][0], MAXSUM[N-1][1]);
}

