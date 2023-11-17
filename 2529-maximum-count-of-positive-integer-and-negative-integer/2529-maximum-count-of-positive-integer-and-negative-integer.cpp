// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int maxcount = 0;
//         int mincount = 0;
//         for(auto it : nums){
//             if(it > 0) maxcount++;
//             else if(it < 0) mincount++;
//         }
//         return max(maxcount, mincount);
//     }
// };
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0, f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) c++;
            if(nums[i]<0) f++;
        }
        if(c>f) return c;
        else return f;
    }
};