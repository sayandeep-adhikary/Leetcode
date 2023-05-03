class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int>s1;
        set<int>s2;
        for(auto a : nums1) s1.insert(a);
        for(auto a : nums2) s2.insert(a);
        for(auto a : s1){
            if(!s2.count(a)) ans[0].push_back(a);
        }
        for(auto a : s2){
            if(!s1.count(a)) ans[1].push_back(a);
        }
        return ans;
    }
};