class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;
        int count;
        for(int i=0; i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                if(s[i] == s[j]){
                    count = j - i - 1;
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};