class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        map<int, int>mp;
        for(auto it : nums) mp[it]++;
        for(auto it : nums){
            if(mp[it] == 1 and mp[it-1] == 0 and mp[it+1] == 0){
                ans.push_back(it);
            }
        }
        return ans;
    }
};