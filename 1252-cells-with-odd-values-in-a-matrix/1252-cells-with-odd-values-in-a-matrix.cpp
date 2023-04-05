class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count = 0;
        vector<vector<int>>v(m, vector<int>(n, 0));
        for(auto it : indices){
            int r = it[0];
            int c = it[1];
            for(int i=0; i<v[r].size(); i++){
                v[r][i]++;
            }
            for(int i=0; i<v.size(); i++){
                v[i][c]++;
            }
        }
        for(auto it : v){
            for(auto a : it){
                cout<<a<<" ";
                if(a&1) count++;
            }
            cout<<endl;
        }
        
        return count;
    }
};