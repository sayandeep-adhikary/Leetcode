class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's voting algorithm
        int count = 0, el;
        for(auto it : nums){
            if(count == 0){
                el = it;
                count = 1;
            }
            else if(it == el) count++;
            else count--;
        }
        return el;
    }
};