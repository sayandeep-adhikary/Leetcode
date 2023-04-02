class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs(n);
        sort(potions.begin(), potions.end());
        for (int i = 0; i < n; i++) {
            int spell = spells[i];
            int l = 0;
            int r = m - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                long long product = (long long)spell * (long long)potions[mid];
                if (product >= success) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            pairs[i] = m - l;
        }
        return pairs;
    }
};