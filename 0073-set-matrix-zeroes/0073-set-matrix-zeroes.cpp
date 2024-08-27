class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<bool>a(row, false);
        vector<bool>b(col, false);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    a[i] = true;
                    b[j] = true;
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(a[i] == 1 or b[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};