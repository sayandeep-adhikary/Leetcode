class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>ans;
        for(auto it : matrix){
            for(auto a : it) ans.push_back(a);
        }
        return find(ans.begin(), ans.end(), target) != ans.end();
    }
};