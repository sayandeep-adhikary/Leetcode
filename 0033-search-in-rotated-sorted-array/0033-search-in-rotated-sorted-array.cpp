class Solution {
public:
    int pivot(vector<int>& nums, int n){
        int s = 0;
        int e = n-1;
        
        while(s < e){
            int mid = s + (e-s)/2;
            if(nums[mid]>=nums[0]){
                s = mid + 1;
            }
            else e = mid;
        }
        return s;
    }
    int BS(vector<int>& nums, int s, int e, int target){
        
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivotelement = pivot(nums, n);
        if(target >= nums[pivotelement] && target <= nums[n-1]){
            return BS( nums, pivotelement, n-1, target);
        }
        else{
            return BS( nums, 0, pivotelement-1, target);
        }
    }
};