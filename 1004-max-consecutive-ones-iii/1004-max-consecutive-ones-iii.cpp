class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, maxLen = 0;
        int zeroCount = 0;
        int n = nums.size();
        // while(right<n){
        //     if(nums[right] == 0) zeroCount++;
        //     while(zeroCount > k){
        //         if(nums[left] == 0) zeroCount--;
        //         left++;
        //     }
        //     int len = right - left + 1;
        //     maxLen = max(len, maxLen);
        //     right++;
        // }
        // return maxLen;
        while(right<n){
            if(nums[right] == 0) zeroCount++;
            if(zeroCount > k){
                if(nums[left] == 0) zeroCount--;
                left++;
            }
            if(zeroCount <= k) maxLen = max(maxLen, (right-left+1));
            right++;
        }
        return maxLen;
    }
};