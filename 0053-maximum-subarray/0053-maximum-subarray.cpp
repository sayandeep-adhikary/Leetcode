class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        //Kadane's Algorithm
        for(auto it : nums){
            sum += it;
            maxi = max(maxi, sum);
            if(sum<0) sum = 0;
        }
        return maxi;
        //*****************************************
        //Brute Force Approach
        // for(int i=0; i<nums.size(); i++){
        //     int curr_sum = 0;
        //     for(int j=i; j<nums.size(); j++){
        //         curr_sum += nums[j];
        //         maxi = max(maxi, curr_sum);
        //     }
        // }
        // return maxi;
    }
};