class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        int low = 0, high = nums.size()-1;
        int firstOcc = -1, lastOcc;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                firstOcc = mid;
                high = mid-1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        if(firstOcc == -1) return ans;
        low = firstOcc, high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                lastOcc = mid;
                low = mid+1;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        for(int i=firstOcc; i<=lastOcc; i++){
            ans.push_back(i);
        }
        return ans;
    }
};