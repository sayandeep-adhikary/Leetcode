class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int j=0;
        int k=mat[0].size()-1;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                if(i == j) ans += mat[i][j];
                else if(i+j == mat[i].size()-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};