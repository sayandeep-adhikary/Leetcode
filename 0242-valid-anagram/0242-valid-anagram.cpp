class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i=0, j=0;
        while(i<s.size() and j<t.size()){
            if(s[i] != t[j]) return false;
            i++, j++;
        }
        return true;
    }
};