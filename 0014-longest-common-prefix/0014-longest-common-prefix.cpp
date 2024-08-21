class Solution {
public:
    bool isValid(char ch, vector<string> strs, int ind){
        for(int i=1; i<strs.size(); i++){
            if(strs[i][ind] != ch) return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            if(isValid(ch, strs, i)) ans += ch;
            else break;
        }
        return ans;
    }
};