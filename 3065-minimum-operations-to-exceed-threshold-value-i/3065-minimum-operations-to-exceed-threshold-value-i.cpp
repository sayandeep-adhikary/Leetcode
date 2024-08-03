class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(auto it : nums){
            if(it < k) count++;
        }
        return count;
    }
};