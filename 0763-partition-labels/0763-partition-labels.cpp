class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        map<char, int>mp;
        for(int i=0; i < s.size(); i++) mp[s[i]] = i;
        int maxi = 0;
        int pointer = -1;
        for(int i=0; i<s.size(); i++){
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i){
                ans.push_back(maxi - pointer);
                pointer = i;
            }
        }
        return ans;
    }
};