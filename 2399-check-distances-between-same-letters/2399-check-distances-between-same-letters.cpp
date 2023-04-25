class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>v(26, -1);
        map<char, int>mp; 
        for(int i=0; i<s.size(); i++){
            int vidx = s[i] - 'a';
            if(v[vidx] == -1) v[vidx] = i; 
        }
        for(int i=0; i<s.size(); i++){
            int vidx = s[i] - 'a';
            mp[s[i]]++;
            if((v[vidx] != -1) and (mp[s[i]] == 2)){
                if((i - v[vidx] -1) != distance[vidx]) return false;
            }
        }
        return true;
    }
};