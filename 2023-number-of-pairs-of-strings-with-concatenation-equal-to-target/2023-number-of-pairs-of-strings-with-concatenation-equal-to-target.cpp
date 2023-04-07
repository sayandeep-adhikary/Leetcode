class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                string temp = nums[i] + nums[j];
                if((temp == target) and (i != j)){
                    count++;
                }
            }
        }
        return count;
    }
};