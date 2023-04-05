class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = words.size();
        for(auto it : words){
            for(int i=0; i<it.size(); i++){
                if(it[i] != s[i]){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};