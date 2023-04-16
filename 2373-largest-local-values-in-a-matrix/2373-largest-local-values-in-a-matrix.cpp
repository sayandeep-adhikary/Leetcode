class Solution {
private: 
    int getAns(int i, int j, vector<vector<int>>&grid){
        int s = i-1;
        int e = j-1;
        int maxi = INT_MIN;
        for(int p=s; p<=i+1; p++){
            for(int q=e; q<=j+1; q++){
                maxi = max(maxi, grid[p][q]);
            }
        }
        return maxi;
    }
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int size = grid.size() - 2;
        vector<vector<int>>fuck(size, vector<int>(size, 0));
        for(int i=0; i<fuck.size(); i++){
            for(int j=0; j<fuck[0].size(); j++){
                fuck[i][j] = getAns(i+1, j+1, grid);
            }
        }
        return fuck;
    }
};