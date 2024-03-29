class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                reverse(words[j].begin(), words[j].end());
                if(words[i] == words[j]) ans++;
                reverse(words[j].begin(), words[j].end());
            }
        }
        return ans;
    }
};