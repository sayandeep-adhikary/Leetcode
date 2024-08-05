class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>mp;
        int ans = 0;
        for(auto it : stones){
            mp[it]++;
        }
        for(auto it : jewels){
            ans += mp[it];
        }
        return ans;
    }
};