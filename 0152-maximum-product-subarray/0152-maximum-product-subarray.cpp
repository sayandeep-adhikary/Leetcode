class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double maxi = INT_MIN;
        double pre = 1, suff = 1;
        for(int i=0; i<nums.size(); i++){
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;
            pre = pre * nums[i];
            suff = suff * nums[nums.size()-i-1];
            maxi = max(maxi, max(pre, suff));
        }
        return maxi;
    }
};