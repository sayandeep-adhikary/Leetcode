class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            for(int j=i+1; j<nums.size(); j++){
                int b = nums[j];
                for(int k=j+1; k<nums.size(); k++){
                    int c = nums[k];
                    if(a != b and a != c and b != c) count++;
                }
            }
        }
        return count;
    }
};