class Solution {
public:
    bool isEqual(int n, int k){
        int count = 0;
        while(n!=0){
            if(n&1) count++;
            n = n >> 1;
        }
        return count == k;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(isEqual(i, k)){
                ans += nums[i];
            }
        }
        return ans;
    }
};