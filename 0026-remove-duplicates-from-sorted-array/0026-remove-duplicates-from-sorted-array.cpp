class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Brute Force
        // set<int>s;
        // int k = 0;
        // for(auto it : nums) s.insert(it);
        // for(auto it : s){
        //     nums[k++] = it;
        // }
        // return k;
        
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};