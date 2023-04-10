class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans = "";
        map<char, char>mp;
        vector<bool>visited(26);
        for(int i=0; i<26; i++) visited[i] = false;
        char ch = 'a';
        for(auto it : key){
            if(it != ' '){
                if(visited[it - 'a'] == false){
                    mp[it] = ch++;
                    visited[it - 'a'] = true;
                }
            }
        }
        for(auto it : message){
            if(it == ' '){
                ans += ' ';
            }
            else{
                ans += mp[it];
            }
        }
        return ans;
    }
};