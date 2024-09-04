class Solution {
public:
    bool canConstruct(string r, string m) {
       if(r.size() > m.size()) return false;
        map<char, int>mp1;
        map<char, int>mp2;
        for(auto it : r) mp1[it]++;
        for(auto it : m) mp2[it]++;
        for(auto it : r){
            if(mp1[it] > mp2[it]) return false;
        }
        return true;
    }
};