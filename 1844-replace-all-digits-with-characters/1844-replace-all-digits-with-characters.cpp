class Solution {
private:
    char shift(char a, char b){
        int n = b - '0';
        return a + n;
    }
public:
    string replaceDigits(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(i&1){
                ans += shift(s[i-1], s[i]);
            }
            else ans += s[i];
        }
        return ans;
    }
};