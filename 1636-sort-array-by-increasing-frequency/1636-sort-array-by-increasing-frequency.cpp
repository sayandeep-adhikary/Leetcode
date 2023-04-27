class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int, int>mp;
        for(auto it : nums) mp[it]++;
        vector<pair<int, int>>v;
        for(auto it : mp) v.push_back({it.first, it.second});
        sort(v.begin(), v.end(), cmp);
        for(auto it : v){
            for(int i=0; i<it.second; i++) ans.push_back(it.first);
        }
        return ans;
    }
};