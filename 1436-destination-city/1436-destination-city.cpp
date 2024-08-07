class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int>mp;
        for(auto it : paths) mp[it[0]]++;
        for(auto it : paths){
            if(mp[it[1]] == 0) return it[1];
        }
        return "";
    }
};