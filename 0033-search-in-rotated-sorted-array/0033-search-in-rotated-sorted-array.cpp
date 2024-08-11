class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target and target<=nums[mid]){
                    high = mid-1;
                }
                else low = mid+1;
            }
            else{
                if(nums[mid]<=target and target<=nums[high]){
                    low = mid+1;
                }
                else high = mid-1;
            }
        }
        return ans;
    }
};