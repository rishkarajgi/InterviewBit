int Solution::maxProfit(const vector<int> &A) {
     int max_price = -1;
            int max_profit = 0;
            for(int i = A.size() - 1; i >= 0; --i) {
                max_price = max(max_price, A[i]);
                max_profit = max(max_profit, max_price - A[i]);
            }
            return max_profit;
}


