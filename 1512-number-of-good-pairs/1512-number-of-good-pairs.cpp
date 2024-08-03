class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto it : nums) mp[it]++;
        int count = 0;
        for(auto it : mp){
            int f = it.second;
            count += (f*(f-1))/2;
        }
        return count;
    }
};