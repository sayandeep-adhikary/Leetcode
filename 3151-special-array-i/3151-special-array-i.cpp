class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size() == 1) return true;
        else if(nums.size() == 2){
            if((nums[0]&1 and nums[1]&1) or (!(nums[0]&1) and !(nums[1]&1)))
                return false;
        }
        for(int i=1; i<nums.size()-1; i++){
            if((nums[i-1]&1 and nums[i]&1) or (nums[i+1]&1 and nums[i]&1) or
              (!(nums[i-1]&1) and !(nums[i]&1)) or (!(nums[i+1]&1) and !(nums[i]&1)))
                return false;
        }
        return true;
    }
};