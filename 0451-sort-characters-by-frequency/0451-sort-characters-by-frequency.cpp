class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(auto it : s) mp[it]++;
        sort(s.begin(), s.end(), [&](char a, char b){
            return mp[a]==mp[b] ? a<b : mp[a]>mp[b]; 
        });
        return s;
    }
};