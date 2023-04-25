class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string, int>mp;
        s1 += " ";
        s2 += " ";
        string temp = "";
        for(int i=0; i<s1.size(); i++){
            if(s1[i] != ' '){
                temp += s1[i];
            }
            else{
                mp[temp]++;
                temp = "";
            }
        }
        temp = "";
        for(int i=0; i<s2.size(); i++){
            if(s2[i] != ' '){
                temp += s2[i];
            }
            else{
                mp[temp]++;
                temp = "";
            }
        }
        for(auto it : mp){
            if(it.second == 1) ans.push_back(it.first);
        }
        return ans;
    }
};