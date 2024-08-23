class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        unordered_map<char, int>mp;
        for(auto it : s) mp[it]++;
        string ans = "";
        while((mp['1'] - 1) != 0){
            ans += '1';
            mp['1']--;
        }
        while(mp['0']){
            ans += '0';
            mp['0']--;
        }
        ans += '1';
        return ans;
    }
};