class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int cnt1 = 0, cnt2 = 0;
        for(auto it : nums1){
            if(find(nums2.begin(), nums2.end(), it) != nums2.end()) cnt1++;
        }
        for(auto it : nums2){
            if(find(nums1.begin(), nums1.end(), it) != nums1.end()) cnt2++;
        }
        return {cnt1, cnt2};
    }
};