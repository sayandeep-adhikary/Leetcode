class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string ans = "";
        while(i<word1.size() and j<word2.size()){
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }
        while(i<word1.size()) ans.push_back(word1[i++]);
        while(j<word2.size()) ans.push_back(word2[j++]);
        return ans;
    }
};