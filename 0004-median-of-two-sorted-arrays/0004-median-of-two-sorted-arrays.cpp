class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto it : nums1) ans.push_back(it);
        for(auto it : nums2) ans.push_back(it);
        sort(ans.begin(), ans.end());
        int n = ans.size();
        if(n&1){
            return (double)ans[n/2];
        }
        else{
            double a = (ans[(n/2)-1]+ans[n/2])/2.0;
            return a;
        }
    }
};