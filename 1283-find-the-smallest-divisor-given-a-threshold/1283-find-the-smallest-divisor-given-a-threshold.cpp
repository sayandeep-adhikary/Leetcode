class Solution {
public:
    bool isLesserOrEqual(vector<int> nums, int d, int t){
        int ans = 0;
        for(auto it : nums) ans += ceil((double)(it) / (double)(d));
        return ans <= t;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isLesserOrEqual(nums, mid, threshold)){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};