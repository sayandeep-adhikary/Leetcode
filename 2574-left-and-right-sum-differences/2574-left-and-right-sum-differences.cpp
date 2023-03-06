class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>lSum(nums.size());
        vector<int>rSum(nums.size());
        lSum[0] = 0;
        rSum[nums.size() - 1] = 0;
        for(int i=1; i<nums.size(); i++){
            lSum[i] = lSum[i-1] + nums[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--){
            rSum[i] = rSum[i+1] + nums[i+1];
        }
        for(int i=0; i<lSum.size(); i++){
            lSum[i] = abs(lSum[i] - rSum[i]);
        }
        return lSum;
    }
};