class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        unordered_map<int, int> matchesWon;
        int n = arr.size();
        int currentMax = arr[0];
        for (int i=1; i<n; i++) {
            currentMax = max(currentMax, arr[i]);
            matchesWon[currentMax]++;
            if (matchesWon[currentMax] >= k) {
                return currentMax;
            }
        }
        return currentMax;
    }
};