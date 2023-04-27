class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second) return a.first < b.first;
        else return a.second > b.second;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans(2);
        vector<pair<int, int>>v;
        for(int i=0; i<mat.size(); i++){
            int cnt = count(mat[i].begin(), mat[i].end(), 1);
            v.push_back({i, cnt});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto it : v) cout<<it.first<<" "<<it.second<<endl;
        ans[0] = v[0].first;
        ans[1] = v[0].second;
        return ans;
    }
};