class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>v;
        for(auto it : matrix){
            for(auto a : it){
                v.push_back(a);
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];
    }
};