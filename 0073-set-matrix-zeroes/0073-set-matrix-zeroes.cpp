class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int col0 = 1;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j != 0){
                        matrix[0][j] = 0;
                    }
                    else col0 = 0;
                }
            }
        }
        for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
                if(matrix[i][j] != 0){
                    if(matrix[i][0] == 0 or matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int i=0; i<col; i++){
                matrix[0][i] = 0;
            }
        }
        if(col0 == 0){
            for(int i=0; i<row; i++){
                matrix[i][0] = 0;
            }
        }
    }
};