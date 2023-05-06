class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int>mp;
        vector<int>v;
        for(auto it : nums){
            for(auto a : it) mp[a]++;
        }
        for(auto it : mp){
            if(it.second == nums.size()) v.push_back(it.first);
        }
        sort(v.begin(), v.end());
        return v;
    }
};