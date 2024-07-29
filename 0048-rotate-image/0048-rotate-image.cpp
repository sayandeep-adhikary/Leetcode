class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // vector<vector<int>>ans(matrix.size(), vector<int>(matrix[0].size()));
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[0].size(); j++){
        //         ans[j][(matrix.size()-1)-i] = matrix[i][j];
        //     }
        // }
        // matrix = ans;
        for(int i=0; i<matrix.size()-1; i++){
            for(int j=i+1; j<matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(auto &it : matrix){
            reverse(it.begin(), it.end());
        }
    }
};