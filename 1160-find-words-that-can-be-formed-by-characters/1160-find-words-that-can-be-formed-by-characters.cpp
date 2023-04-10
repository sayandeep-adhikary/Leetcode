class Solution {
private:
    bool isValid(string s, map<char, int>&mp){
        map<char, int>m;
        for(auto it : s) m[it]++;
        for(auto it : s){
            if(mp[it] < m[it]) return false;
        }
        return true;
    }
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int>mp;
        int ans = 0;
        for(auto it : chars) mp[it]++;
        for(auto it : words){
            if(isValid(it, mp)){
                ans += it.length();
            }
        }
        return ans;
    }
};