class Solution {
public:
    bool reverse(int i, string &s){
        if(i >= s.size()/2) return true;
        if(s[i] != s[s.size()-i-1]) return false;
        return reverse(i+1, s);
    }
    bool isPalindrome(string s) {
        string str = "";
        for(auto it : s){
            if(it >= 65 and it <= 90) str += tolower(it);
            else if(it >= '0' and it <= '9') str += it;
            else if(it >= 97 and it <= 122) str += it;
        }
        // string revStr = str;
        // reverse(0, revStr);
        // return str == revStr;
        return reverse(0, str);
    }
};