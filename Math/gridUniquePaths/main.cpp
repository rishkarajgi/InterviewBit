
int Solution::uniquePaths(int m, int n) {

            long long ans = 1;
            for (int i = n; i < (m + n - 1); i++) {
                ans *= i;
                ans /= (i - n + 1);
            }
            return (int)ans;
    
    
}

