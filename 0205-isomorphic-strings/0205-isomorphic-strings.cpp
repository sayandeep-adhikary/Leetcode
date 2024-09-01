class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mp;
        unordered_map<char, bool>visited;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] == 0 and visited[t[i]] == false){
                mp[s[i]] = t[i];
                visited[t[i]] = true;
            }
            else{
                if(mp[s[i]] != t[i]) return false;
            }
        }
        return true;
    }
};