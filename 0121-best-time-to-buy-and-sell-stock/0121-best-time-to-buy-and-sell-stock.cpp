class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini = p[0];
        int profit = 0;
        for(int i=1; i<p.size(); i++){
            int cost = p[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, p[i]);
        }
        return profit;
    }
};