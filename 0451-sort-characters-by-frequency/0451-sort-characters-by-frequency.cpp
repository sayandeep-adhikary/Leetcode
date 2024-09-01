class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        vector<pair<int, char>>v;
        string ans = "";
        for(auto it : s) mp[it]++;
        for(auto it: mp) v.push_back({it.second, it.first});
        sort(v.begin(), v.end(), [](pair<int, char>a, pair<int, char>b){
            return a.first>b.first;
        });
        for(auto it : v){
            string temp(it.first, it.second);
            ans += temp;
        }
        return ans;
    }
};