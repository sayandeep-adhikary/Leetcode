class Solution {
public:
    int getFirstOcc(vector<int>& nums, int target){
        int ans = -1;
        int low = 0, high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
    int getLastOcc(vector<int>& nums, int target){
        int ans = -1;
        int low = 0, high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOcc = getFirstOcc(nums, target);
        int lastOcc = getLastOcc(nums, target);
        return {firstOcc, lastOcc};
    }
};