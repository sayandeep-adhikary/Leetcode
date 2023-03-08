class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        map<int, int>m;
        float size = nums.size()/3;
        for(auto it : nums) m[it]++;
        for(auto it : m){
            if(it.second > size) ans.push_back(it.first);
        }
        return ans;
    }
};