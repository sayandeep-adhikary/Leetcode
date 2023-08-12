class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        int max = *max_element(nums.begin(), nums.end());
        for(int i=0; i<k; i++){
            ans += max++;
        }
        return ans;
    }
};