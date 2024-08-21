class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>mpp;
        unordered_map<char, bool>vis;
        for(auto it : s){
            mpp[it] = '@';
        }
        int i=0;
        while(i<s.size()){
            char ch1 = s[i];
            char ch2 = t[i];
            if(mpp[ch1] == '@' and vis[ch2] == false){
                mpp[ch1] = ch2;
                vis[ch2] = true;
            }
            else{
                if(mpp[ch1] != ch2) return false;
            }
            i++;
        }
        return true;
    }
};