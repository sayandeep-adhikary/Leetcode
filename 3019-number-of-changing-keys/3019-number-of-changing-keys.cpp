class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i=1; i<s.size(); i++){
            char ch1 = tolower(s[i]);
            char ch2 = tolower(s[i-1]);
            count += ch1 != ch2;
        }
        return count;
    }
};