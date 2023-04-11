class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>v;
        map<int, int>mp;
        for(auto it : nums1){
            mp[it[0]] = it[1];
        }
        for(auto it : nums2){
            mp[it[0]] += it[1];
        }
        for(auto it : mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end());
        return v;
    }
};