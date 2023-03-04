class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int>mp1;
        map<string, int>mp2;
        for(auto it : words1){
            mp1[it]++;
        }
        for(auto it : words2){
            mp2[it]++;
        }
        int count = 0;
        for(auto it : mp1){
            if((it.second == 1) and(find(mp2.begin(), mp2.end(), it) != mp2.end())) count++;
        }
        return count;
    }
};