class Solution {
private:
    string getWord(int i, int j, string t){
        string ans = "";
        ans += t[j-1];
        for(int k=i; k<j-1; k++){
            ans += t[k];
        }
        return ans;
    }
public:
    string sortSentence(string t) {
        string s = "";
        string finalAns = "";
        vector<string>ans;
        int j = 0;
        for(int i=0; i<t.size(); i++){
            if(t[i] == ' '){
                ans.push_back(getWord(j, i, t));
                j = i+1;
            }
            else if(i == t.size()-1){
                ans.push_back(getWord(j, i+1, t));
            }
        }
        sort(ans.begin(), ans.end());
        for(auto it : ans){
            for(int i=1; i<it.size(); i++){
                s += it[i];
            }
            s += ' ';
        }
        for(int i=0; i<s.size()-1; i++) finalAns += s[i];
        return finalAns;
    }
};