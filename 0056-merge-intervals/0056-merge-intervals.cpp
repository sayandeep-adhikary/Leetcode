class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(), inter.end());
        vector<vector<int>>ans;
        for(int i=0; i<inter.size(); i++){
            if(ans.size() == 0 or inter[i][0] > ans.back()[1]) ans.push_back(inter[i]);
            else {
                ans.back()[1] = max(ans.back()[1], inter[i][1]);
            }
        }
        return ans;
    }
};