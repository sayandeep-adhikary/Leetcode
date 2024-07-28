class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // Brute Force
        // vector<int>pos;
        // vector<int>neg;
        // vector<int>ans;
        // for(auto it : nums){
        //     if(it < 0) neg.push_back(it);
        //     else pos.push_back(it);
        // }
        // int a=0, b=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(i&1) ans.push_back(neg[a++]);
        //     else ans.push_back(pos[b++]);
        // }
        // return ans;
        int pos = 0;
        int neg=1;
        vector<int>ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos+=2;
            }
            else{
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};