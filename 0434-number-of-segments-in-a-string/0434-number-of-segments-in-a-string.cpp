class Solution {
public:
    int countSegments(string s) {
        // stringstream ss(s);
        // string word;
        // int count = 0;
        // while(ss >> word) count++;
        // return count;
        return regex_replace(regex_replace(s, regex("\\S+"), "x"), regex(" "), "").size();
    }
};