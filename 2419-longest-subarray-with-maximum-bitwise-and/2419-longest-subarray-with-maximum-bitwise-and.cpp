class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxInd = max_element(nums.begin(), nums.end()) - nums.begin();
        int len = 1;
        int count = 1;
        for(int i=maxInd; i<nums.size()-1; i++){
            if(nums[i] == nums[maxInd] and nums[i+1] == nums[maxInd]){
                count++;
                len = max(len, count);
            }
            else count = 1;
        }
        return len;
    }
};