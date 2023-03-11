class Solution {
public:
    int partitionString(string s) {
        map<char,int>mp;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 2){
                mp.clear();
                mp[s[i]]++;
                count++;
            }
        }
        return count+1;
    }
};