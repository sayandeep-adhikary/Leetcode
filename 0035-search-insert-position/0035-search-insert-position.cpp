class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int i=0, j=nums.size()-1;
        // int ans = nums.size();
        // while(i<=j){
        //     int mid = i + (j-i)/2;
        //     if(nums[mid] >= target){
        //         ans = mid;
        //         j = mid-1;
        //     }
        //     else{
        //         i = mid+1;
        //     }
        // }
        // return ans;
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};