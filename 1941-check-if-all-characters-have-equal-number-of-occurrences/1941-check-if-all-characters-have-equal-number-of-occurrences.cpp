class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int>mp;
        char ch = s[0];
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        } 
        int freq = mp[ch];
        for(auto it : mp){
            if(it.second != freq) return false;
        }
        return true;
    }
};