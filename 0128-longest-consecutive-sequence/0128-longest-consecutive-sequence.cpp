class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count = 0, maxCount = 1;
        int lastElement = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1 == lastElement){
                count++;
            }
            else if(nums[i] != lastElement){
                count = 1;
            }
            lastElement = nums[i];
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};