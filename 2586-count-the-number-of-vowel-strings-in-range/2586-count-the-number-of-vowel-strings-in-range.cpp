class Solution {
public:
    int vowelStrings(vector<string>& words, int l, int r) {
        int count = 0;
        for(int i=l; i<=r; i++){
            string s = words[i];
            if(((s[0] == 'a') or (s[0] == 'e') or (s[0] == 'i') or (s[0] == 'o') or (s[0] == 'u')) and ((s[s.size()-1] == 'a') or (s[s.size()-1] == 'e') or (s[s.size()-1] == 'i') or (s[s.size()-1] == 'o') or (s[s.size()-1] == 'u'))) count++;
        }
        return count;
    }
};