class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int>mp;
        vector<int>ans;
        for(auto it : nums){
            mp[it]++;
            if(mp[it] == (int)(nums.size() / 3) + 1) ans.push_back(it);
            if(ans.size() == 2) break;
        }
        return ans;
    }
};