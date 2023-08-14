class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>ans;
        sort(begin(nums), end(nums));
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int i = nums.size() - 1;
        while(accumulate(ans.begin(), ans.end(), 0) <= sum - accumulate(ans.begin(), ans.end(), 0)){
            ans.push_back(nums[i--]);
        }
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
    }
};