class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]].first++;
            mp[s[i]].second = i;
        }
        pair<int, int>ans = make_pair(0, INT_MAX);
        bool flag = true;
        for(auto it : mp){
            cout<<it.first<<"->"<<it.second.first<<","<<it.second.second<<endl;
        }
        for(auto it : mp){
            if(it.second.first == 1){
                flag = false;
                if(it.second.second < ans.second){
                    ans.first = it.second.first;
                    ans.second = it.second.second;
                }
            }
        }
        return flag == true? -1: ans.second;
    }
};