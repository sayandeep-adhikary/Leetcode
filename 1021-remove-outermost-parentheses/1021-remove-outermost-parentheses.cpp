class Solution {
public:
    string getString(string &s){
        string ans = "";
        for(int i=1; i<s.size()-1; i++){
            ans += s[i];
        }
        return ans;
    }
    string removeOuterParentheses(string s) {
        string ans = "";
        string temp = "";
        int cnt1 = 0, cnt2 = 0;
        for(auto it: s){
            temp += it;
            if(it == '(') cnt1++;
            else cnt2++;
            if(cnt1 == cnt2){
                ans += getString(temp);
                temp = "";
            }
        }
        return ans;
    }
};