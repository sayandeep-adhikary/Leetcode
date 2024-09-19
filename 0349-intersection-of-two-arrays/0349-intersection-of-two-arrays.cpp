class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>st;
        for(auto it : nums1){
            if(find(nums2.begin(), nums2.end(), it) != nums2.end())
                st.insert(it);
        }
        for(auto it : nums2){
            if(find(nums1.begin(), nums1.end(), it) != nums1.end())
                st.insert(it);
        }
        for(auto it : st) ans.push_back(it);
        return ans;
    }
};