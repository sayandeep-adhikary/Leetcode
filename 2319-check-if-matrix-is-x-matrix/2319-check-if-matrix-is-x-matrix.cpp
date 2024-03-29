class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                if(((i == j or i == grid.size() - j - 1) and (grid[i][j] == 0)) or
                   ((i != j and i != grid.size() - j - 1) and (grid[i][j] != 0))) return false;
            }
        }
        return true;
    }
};