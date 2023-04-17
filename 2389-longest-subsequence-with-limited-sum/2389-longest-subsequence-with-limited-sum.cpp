class Solution {
private:
    int getLen(int n, vector<int>&nums){
        int ans = 0;
        int i=0;
        int j=nums.size() - 1;
        while(i<=j){
            int mid = i + (j-i)/2;
            int sum = accumulate(nums.begin(), nums.begin()+mid+1, 0);
            if(sum > n) j = mid - 1;
            // else if(sum == n){
            //     ans = mid + 1;
            // }
            else{
                i = mid + 1;
                ans = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        vector<int>ans;
        sort(nums.begin(), nums.end());
        for(auto it : q){
            ans.push_back(getLen(it, nums));
        }
        return ans;
    }
};