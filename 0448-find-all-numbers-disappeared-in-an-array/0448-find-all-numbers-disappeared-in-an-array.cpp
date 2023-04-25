class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        unordered_map<int, int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(int i=1; i<=n; i++){
            if(mp[i] == 0) v.push_back(i);
        }
        return v;
    }
};