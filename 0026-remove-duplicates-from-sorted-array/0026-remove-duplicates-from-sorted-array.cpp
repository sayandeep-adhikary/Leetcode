class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        int k = 0;
        for(auto it : nums) s.insert(it);
        for(auto it : s){
            nums[k++] = it;
        }
        return k;
    }
};