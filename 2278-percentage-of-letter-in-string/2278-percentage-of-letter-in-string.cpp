class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = count(s.begin(), s.end(), letter);
        int l = s.length();
        int per = (cnt * 100)/l;
        return per;
    }
};