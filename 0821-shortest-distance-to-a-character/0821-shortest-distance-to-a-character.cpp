class Solution {
private:
    int getDist(int i, unordered_map<int, int>&mp){
        int dist = INT_MAX;
        for(auto it : mp){
            dist = min(dist, abs(i - it.second));
        }
        return dist;
    }
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_map<int, int>mp;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c) mp[i] = i;
        }
        vector<int>ans;
        // for(auto it : mp) cout<<it.first<<"->"<<it.second<<endl;
        for(int i=0; i<s.size(); i++){
            ans.push_back(getDist(i, mp));
        }
        return ans;
    }
};