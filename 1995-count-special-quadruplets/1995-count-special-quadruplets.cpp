class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count = 0;
        // sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    int n = nums[i]+nums[j]+nums[k];
                    for(int l=k+1; l<nums.size(); l++){
                        if(n == nums[l]) count++;
                    }
                }
            }
        }
        return count;
    }
};