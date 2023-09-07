class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        long long maxi = INT_MIN;
        long long sum = 0;
        for(auto it : nums){
            if(maxi < it) maxi = it;
            sum += (it + maxi);
            ans.push_back(sum);
        }
        return ans;
    }
};