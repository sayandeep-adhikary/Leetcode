class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>ans;
        unordered_map<int, vector<int>>mp;
        int i=0;
        for(auto it : g) mp[it].push_back(i++);
        for(auto it : mp){
            int temp = it.first;
            int i = 0;
            vector<int>v;
            while(i < it.second.size()){
                if(i == 0 or i % temp != 0) v.push_back(it.second[i]);
                else{
                    ans.push_back(v);
                    v.clear();
                    v.push_back(it.second[i]);
                }
                i++;
            }
            ans.push_back(v);
        }
        return ans;
    }
};