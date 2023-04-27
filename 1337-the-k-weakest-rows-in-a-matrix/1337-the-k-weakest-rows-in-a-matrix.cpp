class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second) return a.first < b.first;
        else return a.second < b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>ans;
        vector<pair<int, int>>v;
        for(int i=0; i<mat.size(); i++){
            int cnt = count(mat[i].begin(), mat[i].end(), 1);
            v.push_back({i, cnt});
        }
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};