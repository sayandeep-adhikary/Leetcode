class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string>mp;
        vector<string>v;
        vector<bool>vis(pattern.size(), false);
        map<string, bool>wordVis;
        stringstream ss(s);
        string word;
        while(ss >> word) v.push_back(word);
        // for_each(v.begin(), v.end(), [](string s){cout<<s<< " ";});
        if(v.size() != pattern.size()) return false;
        for(int i=0; i<pattern.size(); i++){
            if(!vis[pattern[i] - 'a'] and wordVis[v[i]] == false){
                mp[pattern[i]] = v[i];
                vis[pattern[i] - 'a'] = true;
                wordVis[v[i]] = true;
            }
            else{
                if(mp[pattern[i]] != v[i]) return false;
            }
        }
        return true;
    }
};