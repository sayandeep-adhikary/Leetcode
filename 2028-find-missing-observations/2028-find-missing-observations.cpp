class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int targetSum = mean*(n + m) - sum;
        if(targetSum < n or targetSum > (6*n)) return {};
        int rem = targetSum%n;
        vector<int>ans(n, targetSum/n);
        for(int i=0; i<rem; i++){
            ans[i]++;
        }
        return ans;
    }
};