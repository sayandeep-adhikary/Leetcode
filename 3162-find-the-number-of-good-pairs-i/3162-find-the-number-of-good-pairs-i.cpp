class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for(int i=0; i<nums1.size(); i++){
            int num = nums1[i];
            for(int j=0; j<nums2.size(); j++){
                if(num % (nums2[j] * k) == 0) count++;
            }
        }
        return count;
    }
};