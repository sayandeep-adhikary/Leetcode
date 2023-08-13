class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int l = nums.size();
        vector<int>spl;
        int ans = 0;
        int j = 1;
        for(auto it: nums){
            if(l % j == 0){
                spl.push_back(it);
            }
            j++;
        }
        for(auto it: spl){
            ans += it * it;
        }
        return ans;
    }
};