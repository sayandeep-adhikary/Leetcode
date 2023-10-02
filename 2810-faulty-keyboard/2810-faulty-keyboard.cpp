class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for(auto it : s){
            if(it == 'i') reverse(ans.begin(), ans.end());
            else ans += it;
        }
        return ans;
    }
};