class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int more = target - num;
            if(mp.find(more) != mp.end()){
                return {mp[more], i};
            }
            mp[num] = i;
        }
        return {};
    }
};